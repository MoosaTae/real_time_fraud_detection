#ifndef SOUND_SERVICE_H
#define SOUND_SERVICE_H

#include <pthread.h>
#include <stdint.h>
#include <stdbool.h>    
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Buffer size is 4 processing blocks (4 * 24000 samples)
// This gives model service time to process while new samples arrive
// At 48kHz, 24000 samples = 85.3ms of audio
// Total ring buffer = 341.2ms of audio
#define AUDIO_BLOCK_SIZE 4096
#define NUM_BLOCKS 4
#define AUDIO_RING_BUFFER_SIZE (AUDIO_BLOCK_SIZE * NUM_BLOCKS)

// Audio sample block structure
typedef struct {
    int16_t data[AUDIO_BLOCK_SIZE];  // Fixed size block of 16-bit samples
    uint64_t timestamp;              // Timestamp of the block
} audio_block_t;

// Ring buffer structure
typedef struct {
    audio_block_t blocks[NUM_BLOCKS];
    size_t write_idx;               // Write block index
    size_t read_idx;                // Read block index
    pthread_mutex_t mutex;
    pthread_cond_t not_full;
    pthread_cond_t not_empty;
    int shutdown;                   // Shutdown flag
} audio_ring_buffer_t;

// Initialize sound service
int init_sound_service(const char* device, int rate);

// Sound service main thread function
void* sound_service_thread(void* arg);

// Cleanup resources
void cleanup_sound_service();

// Get the audio ring buffer instance
audio_ring_buffer_t* get_audio_buffer();

// Producer: Write audio block to ring buffer
int write_audio_block(const audio_block_t* block);

// Consumer: Read audio block from ring buffer
int read_audio_block(audio_block_t* block);

#endif // SOUND_SERVICE_H
