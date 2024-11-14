#ifndef MODEL_SERVICE_H
#define MODEL_SERVICE_H

#include "sound_service.h"
#define PREDICTION_BUFFER_SIZE 96000
#ifndef MIN
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#endif

typedef struct
{
    int16_t data[PREDICTION_BUFFER_SIZE];
    size_t filled; // Number of samples accumulated
} prediction_buffer_t;
// Initialize the model service
void init_model_service();

// Main thread function for model service
void *model_service_thread(void *arg);

// Process a block of audio samples
int process_full_second(prediction_buffer_t *buffer);

// Clean up model service resources
void cleanup_model_service();

#endif // MODEL_SERVICE_H
