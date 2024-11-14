#include "services/model_service.h"
#include "services/sound_service.h"
#include "handlers/db_handler.h"
#include <stdio.h>
#include <stdbool.h>
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/opt.h>
#include <libavutil/channel_layout.h>
#include <curl/curl.h>
#include <openssl/bio.h>
#include <openssl/evp.h>
#include <openssl/buffer.h>
#include "handlers/command_handler.h"
#include "handlers/mqtt_handler.h"
#include "extract/extractFeatures.h"
#include "predict/predictRealTime.h"

static bool running = false;
static audio_ring_buffer_t *audio_buffer = NULL;
static mqtt_context_t mqtt_ctx;

// High pass filter state and coefficients
static double prev_input = 0.0;
static double prev_output = 0.0;
#define ALPHA 0.9 // Smoothing factor (0 < alpha < 1), lower = more filtering

static double apply_high_pass_filter(double input, double *prev_input, double *prev_output)
{
    double output = ALPHA * (*prev_output + input - *prev_input);
    *prev_input = input;
    *prev_output = output;
    return output;
}

void init_model_service()
{
    if (running)
    {
        printf("Model service is already running\n");
        return;
    }

    audio_buffer = get_audio_buffer();
    running = true;
    printf("Model service initialized\n");

    // Initialize MQTT context
    if (!mqtt_init(&mqtt_ctx, "broker.emqx.io", "audio_streamer_waveform"))
    {
        fprintf(stderr, "Failed to initialize MQTT context\n");
    }
    if (!mqtt_connect(&mqtt_ctx))
    {
        fprintf(stderr, "Failed to connect MQTT context\n");
    }
}

void *model_service_thread(void *arg)
{
    audio_block_t block;
    prediction_buffer_t pred_buffer = {0};
    pred_buffer.max_amplitude = 8000.0;

    while (running)
    {
        // Read audio block from ring buffer
        if (read_audio_block(&block) < 0)
        {
            break;
        }

        // Calculate average amplitude
        size_t remaining = PREDICTION_BUFFER_SIZE - pred_buffer.filled;
        size_t to_copy = MIN(AUDIO_BLOCK_SIZE, remaining);

        memcpy(pred_buffer.data + pred_buffer.filled,
               block.data,
               to_copy * sizeof(int16_t));

        pred_buffer.filled += to_copy;

        if (pred_buffer.filled >= PREDICTION_BUFFER_SIZE)
        {
            if (process_full_second(&pred_buffer) != 0)
            {
                fprintf(stderr, "Audio Processing is being closed!\n");
                continue;
            }

            size_t overlap = AUDIO_BLOCK_SIZE;
            memmove(pred_buffer.data,
                    pred_buffer.data + PREDICTION_BUFFER_SIZE - overlap,
                    overlap * sizeof(int16_t));
            pred_buffer.filled = overlap;
        }
    }

    return NULL;
}

// Function to base64 encode data
char *base64_encode(const unsigned char *input, int length)
{
    BIO *bio, *b64;
    BUF_MEM *bufferPtr;

    b64 = BIO_new(BIO_f_base64());
    // Disable newlines in base64 output
    BIO_set_flags(b64, BIO_FLAGS_BASE64_NO_NL);
    bio = BIO_new(BIO_s_mem());
    bio = BIO_push(b64, bio);

    BIO_write(bio, input, length);
    BIO_flush(bio);
    BIO_get_mem_ptr(bio, &bufferPtr);

    char *base64Text = (char *)malloc(bufferPtr->length + 1);
    memcpy(base64Text, bufferPtr->data, bufferPtr->length);
    base64Text[bufferPtr->length] = 0;

    BIO_free_all(bio);

    return base64Text;
}

// Function to send audio data to server
int send_to_server(const uint8_t *encoded_data, size_t data_size,
                   const char *device_id, time_t timestamp,
                   const char *api_key)
{
    CURL *curl;
    CURLcode res;
    struct curl_slist *headers = NULL;
    char *base64_data;
    char *json_payload;
    long response_code;

    printf("DEBUG: Starting server upload. Data size: %zu\n", data_size);

    // Base64 encode the audio data
    base64_data = base64_encode(encoded_data, data_size);
    if (!base64_data)
    {
        fprintf(stderr, "Failed to base64 encode data\n");
        return -1;
    }
    printf("DEBUG: Base64 encoding complete\n");

    // Format timestamp as ISO 8601
    char timestamp_str[30];
    struct tm *tm_info = localtime(&timestamp);
    strftime(timestamp_str, sizeof(timestamp_str), "%Y-%m-%dT%H:%M:%SZ", tm_info);

    // Allocate memory for JSON payload
    // Calculate required size more accurately
    size_t json_size = strlen(base64_data) + strlen(device_id) + strlen(timestamp_str) + 200;
    json_payload = malloc(json_size);
    if (!json_payload)
    {
        free(base64_data);
        fprintf(stderr, "Failed to allocate memory for JSON payload\n");
        return -1;
    }

    int written = snprintf(json_payload, json_size,
                           "{\"data\":\"%s\",\"deviceId\":\"%s\",\"metadata\":{\"timestamp\":\"%s\",\"format\":\"mp3\",\"sampleRate\":44800,\"channels\":1}}",
                           base64_data, device_id, timestamp_str);

    if (written >= json_size)
    {
        fprintf(stderr, "JSON payload truncated\n");
        free(base64_data);
        free(json_payload);
        return -1;
    }

    printf("DEBUG: JSON payload created (length: %d)\n", written);

    curl = curl_easy_init();
    if (curl)
    {
        // Set headers
        headers = curl_slist_append(headers, "Content-Type: application/json");

        char api_header[100];
        snprintf(api_header, sizeof(api_header), "x-api-key: %s", api_key);
        headers = curl_slist_append(headers, api_header);

        // Set SSL verification options
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 1L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 2L);

        // Set URL and payload
        curl_easy_setopt(curl, CURLOPT_URL, "https://superposition-server.fly.dev/audio/");
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, json_payload);
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

        // Enable verbose output for debugging
        curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);

        printf("DEBUG: Sending request to server\n");

        // Perform request
        res = curl_easy_perform(curl);

        // Check for errors
        if (res != CURLE_OK)
        {
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                    curl_easy_strerror(res));
        }
        else
        {
            // Get response code
            curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
            printf("DEBUG: Server response code: %ld\n", response_code);

            // Print the first 100 characters of the payload for debugging
            printf("DEBUG: First 100 chars of payload: %.100s...\n", json_payload);
        }

        // Cleanup
        curl_easy_cleanup(curl);
        curl_slist_free_all(headers);
    }

    free(base64_data);
    free(json_payload);

    return (res == CURLE_OK && response_code == 200) ? 0 : -1;
}

static bool recording_enabled = true;
static pthread_mutex_t recording_mutex = PTHREAD_MUTEX_INITIALIZER;

void start_recording()
{
    pthread_mutex_lock(&recording_mutex);
    recording_enabled = true;
    printf("Recording started\n");
    pthread_mutex_unlock(&recording_mutex);
}

void stop_recording()
{
    pthread_mutex_lock(&recording_mutex);
    recording_enabled = false;
    printf("Recording stopped\n");
    pthread_mutex_unlock(&recording_mutex);
}

bool is_recording()
{
    bool status;
    pthread_mutex_lock(&recording_mutex);
    status = recording_enabled;
    pthread_mutex_unlock(&recording_mutex);
    return status;
}

void softmax(double *input, int length, double *output)
{
    double max = input[0];
    for (int i = 1; i < length; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
        }
    }

    double sum = 0.0;
    for (int i = 0; i < length; i++)
    {
        output[i] = exp(input[i] - max);
        sum += output[i];
    }

    for (int i = 0; i < length; i++)
    {
        output[i] /= sum;
    }
}

int process_full_second(prediction_buffer_t *buffer)
{
    if (!buffer || !is_recording())
    {
        return -1;
    }

    double average = 0.0;
    double features[7];
    double signal_buffer[192000];
    double filtered_buffer[192000];

    // Convert to double and normalize
    for (int i = 0; i < PREDICTION_BUFFER_SIZE; i++)
    {
        average += abs(buffer->data[i]);
        signal_buffer[i] = buffer->data[i] / buffer->max_amplitude;
    }
    average /= PREDICTION_BUFFER_SIZE;

    // Apply high pass filter to the normalized signal
    prev_input = signal_buffer[0]; // Initialize with first sample
    prev_output = 0.0;             // Initialize previous output
    for (int i = 0; i < PREDICTION_BUFFER_SIZE; i++)
    {
        filtered_buffer[i] = apply_high_pass_filter(signal_buffer[i], &prev_input, &prev_output);
    }

    double prediction_score[3];
    cell_wrap_0 predictions[1];
    predictions[0].f1.size[0] = 1;
    predictions[0].f1.size[1] = 12;

    for (int i = 0; i < 192000; i++)
        if (filtered_buffer[i] > buffer->max_amplitude)
        {
            buffer->max_amplitude = filtered_buffer[i];
        }

    // Use filtered signal for feature extraction
    extractFeatures(filtered_buffer, (double)SAMPLE_RATE, features);

    predictRealTime(features, (double)SAMPLE_RATE, predictions,
                    prediction_score);

    // Handle prediction results
    printf("Predictions: %s\n", predictions[0].f1.data);

    double softmax_scores[3];
    softmax(prediction_score, 3, softmax_scores);
    float confidence = softmax_scores[0];
    int arg_max = 0;
    for (int i = 1; i < 3; i++)
    {
        if (softmax_scores[i] > confidence)
        {
            arg_max = i;
        }
    }   
    for (int i = 0; i < 3; i++)
    {
        printf("Prediction score %d: %f\n", i, softmax_scores[i]);
    }

    // Create JSON payload with both amplitude and prediction
    char payload[256];
    time_t now = time(NULL);
    snprintf(payload, sizeof(payload),
             "{\"timestamp\":%ld,"
             "\"amplitude\":%.2f,"
             "\"prediction\":\"%d\","
             "\"confidence\":%.2f}",
             now, average, arg_max, softmax_scores[0]);

    mqtt_publish(&mqtt_ctx, "audio/predictions", payload);
    log_system_event(MODEL_DB_NAME, payload);
    const float THRESHOLD = 2000.0f;
    if (average > THRESHOLD)
    {
        printf("Significant audio activity detected\n");

        time_t detection_time = time(NULL);
        size_t total_encoded_size = 0;
        int total_frames = 0;
        int encoding_success = 1;
        uint8_t *encoded_buffer = NULL;
        size_t encoded_buffer_size = 0;
        encoded_buffer = malloc(buffer->filled * 2);
        if (!encoded_buffer)
        {
            encoding_success = 0;
            goto log_event;
        }
        encoded_buffer_size = 0;

        const AVCodec *codec = avcodec_find_encoder(AV_CODEC_ID_MP3);
        if (!codec)
        {
            fprintf(stderr, "Codec not found\n");
            encoding_success = 0;
            goto log_event;
        }

        AVCodecContext *c = avcodec_alloc_context3(codec);
        if (!c)
        {
            fprintf(stderr, "Could not allocate audio codec context\n");
            encoding_success = 0;
            goto log_event;
        }

        // Set up codec parameters
        c->bit_rate = 64000;
        c->sample_fmt = AV_SAMPLE_FMT_S16P;
        c->sample_rate = 48000;

        AVChannelLayout channel_layout = AV_CHANNEL_LAYOUT_MONO;
        int ret = av_channel_layout_copy(&c->ch_layout, &channel_layout);
        if (ret < 0)
        {
            fprintf(stderr, "Could not set channel layout\n");
            encoding_success = 0;
            goto cleanup;
        }

        if (avcodec_open2(c, codec, NULL) < 0)
        {
            fprintf(stderr, "Could not open codec\n");
            encoding_success = 0;
            goto cleanup;
        }

        AVPacket *pkt = av_packet_alloc();
        if (!pkt)
        {
            fprintf(stderr, "Could not allocate packet\n");
            encoding_success = 0;
            goto cleanup;
        }

        // Process the audio data in chunks of frame_size
        size_t samples_processed = 0;
        while (samples_processed < buffer->filled)
        {
            AVFrame *frame = av_frame_alloc();
            if (!frame)
            {
                encoding_success = 0;
                goto cleanup;
            }

            frame->nb_samples = c->frame_size;
            frame->format = c->sample_fmt;

            ret = av_channel_layout_copy(&frame->ch_layout, &c->ch_layout);
            if (ret < 0)
            {
                av_frame_free(&frame);
                continue;
            }

            ret = av_frame_get_buffer(frame, 0);
            if (ret < 0)
            {
                av_frame_free(&frame);
                continue;
            }

            ret = av_frame_make_writable(frame);
            if (ret < 0)
            {
                av_frame_free(&frame);
                continue;
            }

            size_t samples_remaining = buffer->filled - samples_processed;
            size_t samples_to_copy = FFMIN(c->frame_size, samples_remaining);

            int16_t *planar_data = (int16_t *)frame->data[0];
            memcpy(planar_data,
                   buffer->data + samples_processed,
                   samples_to_copy * sizeof(int16_t));

            if (samples_to_copy < c->frame_size)
            {
                memset(planar_data + samples_to_copy, 0,
                       (c->frame_size - samples_to_copy) * sizeof(int16_t));
            }

            samples_processed += samples_to_copy;

            ret = avcodec_send_frame(c, frame);
            av_frame_free(&frame);

            if (ret < 0)
                continue;

            total_frames++;

            while (1)
            {
                ret = avcodec_receive_packet(c, pkt);
                if (ret == AVERROR(EAGAIN) || ret == AVERROR_EOF)
                {
                    break;
                }
                else if (ret < 0)
                {
                    continue;
                }

                if (encoded_buffer_size + pkt->size > buffer->filled * 2)
                {
                    uint8_t *new_buffer = realloc(encoded_buffer, encoded_buffer_size + pkt->size + 4096);
                    if (!new_buffer)
                    {
                        encoding_success = 0;
                        goto cleanup;
                    }
                    encoded_buffer = new_buffer;
                }

                memcpy(encoded_buffer + encoded_buffer_size, pkt->data, pkt->size);
                encoded_buffer_size += pkt->size;
                total_encoded_size = encoded_buffer_size;

                av_packet_unref(pkt);
            }
        }

        // Flush encoder
        avcodec_send_frame(c, NULL);
        while (1)
        {
            ret = avcodec_receive_packet(c, pkt);
            if (ret == AVERROR(EAGAIN) || ret == AVERROR_EOF)
            {
                break;
            }
            else if (ret < 0)
            {
                break;
            }
            total_encoded_size += pkt->size;
            av_packet_unref(pkt);
        }

        // Send encoded data to server
        if (encoding_success && encoded_buffer_size > 0)
        {
            printf("DEBUG: Sending %zu bytes of encoded audio to server\n", encoded_buffer_size);
            const char *device_id = "device_id";
            const char *api_key = "key1";

            if (send_to_server(encoded_buffer, encoded_buffer_size,
                               device_id, detection_time, api_key) != 0)
            {
                fprintf(stderr, "Failed to send audio to server\n");
            }
        }
        else
        {
            printf("DEBUG: No data to send: success=%d, size=%zu\n",
                   encoding_success, encoded_buffer_size);
        }

    cleanup:
        if (encoded_buffer)
            free(encoded_buffer);
        if (pkt)
            av_packet_free(&pkt);
        if (c)
            avcodec_free_context(&c);

    log_event:
        // Create log entry
        char event_json[512];
        snprintf(event_json, sizeof(event_json),
                 "{"
                 "\"timestamp\": %ld,"
                 "\"outcome\": {"
                 "\"audio_length_sec\": %.2f,"
                 "\"threshold_value\": %.2f,"
                 "\"average_value\": %.2f,"
                 "\"encoding_success\": %d,"
                 "\"total_frames\": %d,"
                 "\"total_encoded_size\": %zu,"
                 "\"average_frame_size\": %.2f,"
                 "\"server_upload\": %d"
                 "}"
                 "}",
                 detection_time,
                 (float)buffer->filled / 48000,
                 THRESHOLD,
                 average,
                 encoding_success,
                 total_frames,
                 total_encoded_size,
                 total_frames > 0 ? (float)total_encoded_size / total_frames : 0.0,
                 encoding_success && encoded_buffer_size > 0);

        log_sound_event(SOUND_DB_NAME, event_json);

        return encoding_success ? 0 : -1;
    }

    return 0;
}

void cleanup_model_service()
{
    running = false;

    // Cleanup MQTT context
    mqtt_cleanup(&mqtt_ctx);
}
