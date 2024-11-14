#include "services/model_service.h"
#include "services/sound_service.h"
#include <stdio.h>
#include <stdbool.h>

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

    if (average > 2000.0f)
    {
        printf("Significant audio activity detected in second\n");
        printf("Buffer filled: %lu\n", buffer->filled);
    }
    return 0;
}

// int mock_process_audio_sample(const audio_block_t *block)
// {
//     if (!block)
//     {
//         return -1;
//     }

//     float sum = 0.0f;
//     for (int i = 0; i < AUDIO_BLOCK_SIZE; i++)
//     {
//         sum += abs(block->data[i]);
//     }
//     float average = sum / AUDIO_BLOCK_SIZE;

//     if (average > 2000.0f)
//     {
//         printf("Significant audio activity detected at timestamp: %lu\n",
//                block->timestamp);
//     }
//     return 0;
// }

void cleanup_model_service()
{
    running = false;
}
