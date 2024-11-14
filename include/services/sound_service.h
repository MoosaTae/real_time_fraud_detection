#ifndef SOUND_SERVICE_H
#define SOUND_SERVICE_H

#include <pthread.h>

int init_sound_service(const char* device, int rate);
void* sound_service_thread(void* arg);
void cleanup_sound_service();

#endif // SOUND_SERVICE_H
