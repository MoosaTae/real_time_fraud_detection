#ifndef MODEL_SERVICE_C
#define MODEL_SERVICE_C

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

    while (running)
    {
        // Read audio block from ring buffer
        if (read_audio_block(&block) < 0)
        {
            break;
        }

        // Process the audio block
        if (process_audio_sample(&block) != 0)
        {
            fprintf(stderr, "Error processing audio block\n");
            continue;
        }
    }

    return NULL;
}

int process_audio_sample(const audio_block_t *block)
{
    if (!block)
    {
        return -1;
    }

    // TODO: Implement your model processing logic here
    // This is where you would apply your sound detection model
    // to the audio data in block->data

    // Example processing placeholder
    float sum = 0.0f;
    for (int i = 0; i < AUDIO_BLOCK_SIZE; i++)
    {
        sum += abs(block->data[i]);
    }
    float average = sum / AUDIO_BLOCK_SIZE;

    // Log only if significant audio activity detected
    if (average > 2000.0f)
    {
        printf("Significant audio activity detected at timestamp: %lu\n",
               block->timestamp);
    }

    return 0;
}

void cleanup_model_service()
{
    running = false;
}

#endif // MODEL_SERVICE_C
