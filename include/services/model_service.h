#ifndef MODEL_SERVICE_H
#define MODEL_SERVICE_H

#include "sound_service.h"

// Initialize the model service
void init_model_service();

// Main thread function for model service
void* model_service_thread(void* arg);

// Process a block of audio samples
int process_audio_sample(const audio_block_t* block);

// Clean up model service resources
void cleanup_model_service();

#endif // MODEL_SERVICE_H
