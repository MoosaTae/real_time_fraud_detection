#include "services/model_service.h"
#include "services/sound_service.h"
#include <stdio.h>
#include <stdbool.h>
#include "extract/extractFeatures.h"
#include "predict/predictRealTime.h"

static bool running = false;
static audio_ring_buffer_t *audio_buffer = NULL;

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
}

void *model_service_thread(void *arg)
{
    audio_block_t block;
    prediction_buffer_t pred_buffer = {0};

    while (running)
    {
        // Read audio block from ring buffer
        if (read_audio_block(&block) < 0)
        {
            break;
        }
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
                fprintf(stderr, "Error processing audio block\n");
                continue;
            }

            size_t overlap = AUDIO_BLOCK_SIZE; // For overlapping windows
            memmove(pred_buffer.data,
                    pred_buffer.data + PREDICTION_BUFFER_SIZE - overlap,
                    overlap * sizeof(int16_t));
            pred_buffer.filled = overlap;
        }

        // Free the block data after processing
        free(block.data);
    }

    return NULL;
}

int process_full_second(prediction_buffer_t *buffer)
{
    if (!buffer)
    {
        return -1;
    }

    // Mock processing
    float sum = 0.0f;
    for (int i = 0; i < PREDICTION_BUFFER_SIZE; i++)
    {
        sum += abs(buffer->data[i]);
    }
    float average = sum / PREDICTION_BUFFER_SIZE;
    printf("Average audio activity: %f\n", average);
    if (average > 1000.0f)
    {
        printf("Significant audio activity detected in second\n");

        // Convert int16_t samples to double
        double signal_buffer[192000]; // Match extractFeatures input size
        for (int i = 0; i < 192000; i++)
        {
            signal_buffer[i] = (double)buffer->data[i] / 32768.0; // Normalize to [-1, 1]
        }

        double features[7];
        extractFeatures(signal_buffer, (double)SAMPLE_RATE, features);

        for (int i = 0; i < 7; i++)
        {
            features[i] = rand() % 100;
            printf("Feature %d: %f\n", i, features[i]);
        }
        double prediction_score[3];
        cell_wrap_0 predictions[1];
        predictions[0].f1.size[0] = 1;
        predictions[0].f1.size[1] = 12;

        predictRealTime(features, (double)SAMPLE_RATE, predictions, prediction_score);
        printf("Predictions: %s\n", predictions[0].f1.data);
        for (int i = 0; i < 3; i++)
        {
            printf("Prediction score %d: %f\n", i, prediction_score[i]);
        }
        free(predictions[0].f1.data);

    }
    return 0;
}

void cleanup_model_service()
{
    running = false;
}
