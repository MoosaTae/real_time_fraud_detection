#include "services/model_service.h"
#include "services/sound_service.h"
#include <stdio.h>
#include <stdbool.h>
#include "extract/extractFeatures.h"
#include "predict/predictRealTime.h"

// Thread-safe feature queue
#define FEATURE_QUEUE_SIZE 10
typedef struct
{
    pthread_mutex_t mutex;
    pthread_cond_t not_empty;
    pthread_cond_t not_full;
    double features[FEATURE_QUEUE_SIZE][7];
    int head;
    int tail;
    int count;
} feature_queue_t;

static bool running = false;
static audio_ring_buffer_t *audio_buffer = NULL;
static feature_queue_t feature_queue = {
    .head = 0,
    .tail = 0,
    .count = 0};

static pthread_t extractor_thread;
static pthread_t predictor_thread;

// Feature extraction thread function
static void *feature_extraction_thread(void *arg)
{
    prediction_buffer_t pred_buffer = {0};
    double signal_buffer[192000];

    while (running)
    {
        audio_block_t block;
        if (read_audio_block(&block) < 0)
            break;

        // Fill prediction buffer
        size_t remaining = PREDICTION_BUFFER_SIZE - pred_buffer.filled;
        size_t to_copy = MIN(AUDIO_BLOCK_SIZE, remaining);
        memcpy(pred_buffer.data + pred_buffer.filled, block.data,
               to_copy * sizeof(int16_t));
        pred_buffer.filled += to_copy;

        if (pred_buffer.filled >= PREDICTION_BUFFER_SIZE)
        {
            // Convert to double and normalize
            for (int i = 0; i < 192000; i++)
            {
                signal_buffer[i] = (double)pred_buffer.data[i] / 32768.0;
            }

            // Extract features
            double features[7];
            extractFeatures(signal_buffer, (double)SAMPLE_RATE, features);

            // Add to feature queue
            pthread_mutex_lock(&feature_queue.mutex);
            while (feature_queue.count >= FEATURE_QUEUE_SIZE && running)
            {
                pthread_cond_wait(&feature_queue.not_full, &feature_queue.mutex);
            }

            if (!running)
            {
                pthread_mutex_unlock(&feature_queue.mutex);
                break;
            }

            memcpy(feature_queue.features[feature_queue.tail], features,
                   sizeof(double) * 7);
            feature_queue.tail = (feature_queue.tail + 1) % FEATURE_QUEUE_SIZE;
            feature_queue.count++;

            pthread_cond_signal(&feature_queue.not_empty);
            pthread_mutex_unlock(&feature_queue.mutex);

            // Handle overlap
            size_t overlap = AUDIO_BLOCK_SIZE;
            memmove(pred_buffer.data,
                    pred_buffer.data + PREDICTION_BUFFER_SIZE - overlap,
                    overlap * sizeof(int16_t));
            pred_buffer.filled = overlap;
        }
    }
    return NULL;
}

// Prediction thread function
static void *prediction_thread(void *arg)
{
    while (running)
    {
        double features[7];

        // Get features from queue
        pthread_mutex_lock(&feature_queue.mutex);
        while (feature_queue.count == 0 && running)
        {
            pthread_cond_wait(&feature_queue.not_empty, &feature_queue.mutex);
        }

        if (!running)
        {
            pthread_mutex_unlock(&feature_queue.mutex);
            break;
        }

        memcpy(features, feature_queue.features[feature_queue.head],
               sizeof(double) * 7);
        feature_queue.head = (feature_queue.head + 1) % FEATURE_QUEUE_SIZE;
        feature_queue.count--;

        pthread_cond_signal(&feature_queue.not_full);
        pthread_mutex_unlock(&feature_queue.mutex);

        // Run prediction
        double prediction_score[3];
        cell_wrap_0 predictions[1];
        predictions[0].f1.size[0] = 1;
        predictions[0].f1.size[1] = 12;

        predictRealTime(features, (double)SAMPLE_RATE, predictions,
                        prediction_score);

        // Handle prediction results
        printf("Predictions: %s\n", predictions[0].f1.data);
        for (int i = 0; i < 3; i++)
        {
            printf("Prediction score %d: %f\n", i, prediction_score[i]);
        }
    }
    return NULL;
}

void init_model_service()
{
    if (running)
    {
        printf("Model service is already running\n");
        return;
    }

    pthread_mutex_init(&feature_queue.mutex, NULL);
    pthread_cond_init(&feature_queue.not_empty, NULL);
    pthread_cond_init(&feature_queue.not_full, NULL);

    audio_buffer = get_audio_buffer();
    running = true;

    pthread_create(&extractor_thread, NULL, feature_extraction_thread, NULL);
    pthread_create(&predictor_thread, NULL, prediction_thread, NULL);

    printf("Model service initialized\n");
}

void cleanup_model_service()
{
    running = false;
    pthread_cond_broadcast(&feature_queue.not_empty);
    pthread_cond_broadcast(&feature_queue.not_full);

    pthread_join(extractor_thread, NULL);
    pthread_join(predictor_thread, NULL);

    pthread_mutex_destroy(&feature_queue.mutex);
    pthread_cond_destroy(&feature_queue.not_empty);
    pthread_cond_destroy(&feature_queue.not_full);
}