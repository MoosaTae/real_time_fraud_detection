#ifndef SOUND_SERVICE_C
#define SOUND_SERVICE_C

#define _POSIX_C_SOURCE 200809L  // Required for CLOCK_MONOTONIC

#include "services/sound_service.h"
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <alsa/asoundlib.h>
#include <utils/config.h>
#include <time.h>

static bool running = false;
static char sound_device[64];
static int sample_rate;
static audio_ring_buffer_t ring_buffer;

// Initialize the ring buffer
static void init_ring_buffer() {
    ring_buffer.write_idx = 0;
    ring_buffer.read_idx = 0;
    ring_buffer.shutdown = 0;
    pthread_mutex_init(&ring_buffer.mutex, NULL);
    pthread_cond_init(&ring_buffer.not_full, NULL);
    pthread_cond_init(&ring_buffer.not_empty, NULL);
}

// Clean up ring buffer resources
static void cleanup_ring_buffer() {
    pthread_mutex_destroy(&ring_buffer.mutex);
    pthread_cond_destroy(&ring_buffer.not_full);
    pthread_cond_destroy(&ring_buffer.not_empty);
}

audio_ring_buffer_t* get_audio_buffer() {
    return &ring_buffer;
}

int write_audio_block(const audio_block_t* block) {
    pthread_mutex_lock(&ring_buffer.mutex);
    
    // Wait if buffer is full
    while (((ring_buffer.write_idx + 1) % NUM_BLOCKS) == ring_buffer.read_idx && !ring_buffer.shutdown) {
        pthread_cond_wait(&ring_buffer.not_full, &ring_buffer.mutex);
    }
    
    if (ring_buffer.shutdown) {
        pthread_mutex_unlock(&ring_buffer.mutex);
        return -1;
    }

    // Copy block to ring buffer
    memcpy(&ring_buffer.blocks[ring_buffer.write_idx], block, sizeof(audio_block_t));
    ring_buffer.write_idx = (ring_buffer.write_idx + 1) % NUM_BLOCKS;
    
    pthread_cond_signal(&ring_buffer.not_empty);
    pthread_mutex_unlock(&ring_buffer.mutex);
    return 0;
}

int read_audio_block(audio_block_t* block) {
    pthread_mutex_lock(&ring_buffer.mutex);
    
    // Wait if buffer is empty
    while (ring_buffer.read_idx == ring_buffer.write_idx && !ring_buffer.shutdown) {
        pthread_cond_wait(&ring_buffer.not_empty, &ring_buffer.mutex);
    }
    
    if (ring_buffer.shutdown) {
        pthread_mutex_unlock(&ring_buffer.mutex);
        return -1;
    }

    // Copy block from ring buffer
    memcpy(block, &ring_buffer.blocks[ring_buffer.read_idx], sizeof(audio_block_t));
    ring_buffer.read_idx = (ring_buffer.read_idx + 1) % NUM_BLOCKS;
    
    pthread_cond_signal(&ring_buffer.not_full);
    pthread_mutex_unlock(&ring_buffer.mutex);
    return 0;
}

void *sound_service_thread(void *arg)
{
    int err;
    audio_block_t current_block;
    snd_pcm_t *capture_handle;
    snd_pcm_hw_params_t *hw_params;
    snd_pcm_sw_params_t *sw_params;

    // Initialize sound
    if ((err = snd_pcm_open(&capture_handle, sound_device, SND_PCM_STREAM_CAPTURE, 0)) < 0) {
        fprintf(stderr, "cannot open audio device %s (%s)\n", sound_device, snd_strerror(err));
        return NULL;
    }
    printf("snd_pcm_open OK\n");

    snd_pcm_hw_params_alloca(&hw_params);
    snd_pcm_sw_params_alloca(&sw_params);

    unsigned int rate = sample_rate;
    unsigned int channels = 1;
    snd_pcm_hw_params_any(capture_handle, hw_params);
    snd_pcm_hw_params_set_access(capture_handle, hw_params, SND_PCM_ACCESS_RW_INTERLEAVED);
    snd_pcm_hw_params_set_format(capture_handle, hw_params, SND_PCM_FORMAT_S16_LE);
    snd_pcm_hw_params_set_rate_near(capture_handle, hw_params, &rate, 0);
    snd_pcm_hw_params_set_channels(capture_handle, hw_params, channels);
    snd_pcm_hw_params(capture_handle, hw_params);
    printf("HW init ok\n");

    snd_pcm_sw_params_current(capture_handle, sw_params);
    snd_pcm_sw_params_set_start_threshold(capture_handle, sw_params, 0);
    snd_pcm_sw_params(capture_handle, sw_params);
    printf("SW init ok\n");

    if ((err = snd_pcm_prepare(capture_handle)) < 0) {
        fprintf(stderr, "unable to prepare audio stream: %s\n", snd_strerror(err));
        return NULL;
    }

    struct timespec ts;
    while (running) {
        // Read from sound card
        if ((err = snd_pcm_readi(capture_handle, current_block.data, AUDIO_BLOCK_SIZE)) != AUDIO_BLOCK_SIZE) {
            fprintf(stderr, "read from audio interface failed (%s)\n", snd_strerror(err));
            break;
        }

        // Get current timestamp
        clock_gettime(CLOCK_MONOTONIC, &ts);
        current_block.timestamp = (uint64_t)ts.tv_sec * 1000000000 + ts.tv_nsec;

        // Write to ring buffer
        if (write_audio_block(&current_block) < 0) {
            break;
        }
    }

    snd_pcm_close(capture_handle);
    return NULL;
}

int init_sound_service(const char *device, int rate)
{
    if (running) {
        printf("Sound service is already running\n");
        return 0;
    }

    strncpy(sound_device, device, sizeof(sound_device) - 1);
    sound_device[sizeof(sound_device) - 1] = '\0';
    sample_rate = rate;

    init_ring_buffer();
    running = true;
    printf("Sound service initialized with device %s and sample rate %d\n", sound_device, sample_rate);
    return 0;
}

void cleanup_sound_service() {
    running = false;
    ring_buffer.shutdown = 1;
    pthread_cond_broadcast(&ring_buffer.not_empty);
    pthread_cond_broadcast(&ring_buffer.not_full);
    cleanup_ring_buffer();
}

#endif // SOUND_SERVICE_C
