#ifndef MODEL_SERVICE_H
#define MODEL_SERVICE_H

#include "sound_service.h"
#include "handlers/mqtt_handler.h" // Add this include
#define SAMPLE_RATE 48000
#define PREDICTION_BUFFER_SIZE (SAMPLE_RATE * 4)
#ifndef MIN
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#endif

typedef struct
{
    int16_t data[PREDICTION_BUFFER_SIZE];
    size_t filled; // Number of samples accumulated
    double max_amplitude;
} prediction_buffer_t;
// Initialize the model service
void init_model_service();

// Main thread function for model service
void *model_service_thread(void *arg);

// Process a block of audio samples
int process_full_second(prediction_buffer_t *buffer);

// Clean up model service resources
void cleanup_model_service();

// Base 64 encode for encoding data
char *base64_encode(const unsigned char *input, int length);

// Recording
void start_recording();
void stop_recording();
bool is_recording();

#endif // MODEL_SERVICE_H
