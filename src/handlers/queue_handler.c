#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "handlers/mqtt_handler.h"

void init_command_queue(CommandQueue *queue)
{
    queue->front = 0;
    queue->rear = -1;
    queue->count = 0;
    queue->running = true;
    pthread_mutex_init(&queue->mutex, NULL);
    pthread_cond_init(&queue->not_empty, NULL);
    pthread_cond_init(&queue->not_full, NULL);
}

bool enqueue_command(CommandQueue *queue, const char *command, const char *params)
{
    bool result = false;

    pthread_mutex_lock(&queue->mutex);

    // Wait while queue is full and system is running
    while (queue->count >= MAX_QUEUE_SIZE && queue->running)
    {
        pthread_cond_wait(&queue->not_full, &queue->mutex);
    }

    if (queue->running)
    {
        queue->rear = (queue->rear + 1) % MAX_QUEUE_SIZE;
        strncpy(queue->commands[queue->rear].command, command, MAX_COMMAND_LENGTH - 1);
        strncpy(queue->commands[queue->rear].params, params, MAX_COMMAND_LENGTH - 1);
        queue->commands[queue->rear].timestamp = time(NULL);
        queue->count++;

        pthread_cond_signal(&queue->not_empty);
        result = true;
    }

    pthread_mutex_unlock(&queue->mutex);
    return result;
}

bool dequeue_command(CommandQueue *queue, Command *cmd)
{
    bool result = false;

    pthread_mutex_lock(&queue->mutex);

    // Wait while queue is empty and system is running
    while (queue->count == 0 && queue->running)
    {
        pthread_cond_wait(&queue->not_empty, &queue->mutex);
    }

    if (queue->count > 0)
    {
        *cmd = queue->commands[queue->front];
        queue->front = (queue->front + 1) % MAX_QUEUE_SIZE;
        queue->count--;

        pthread_cond_signal(&queue->not_full);
        result = true;
    }

    pthread_mutex_unlock(&queue->mutex);
    return result;
}

void cleanup_command_queue(CommandQueue *queue)
{
    pthread_mutex_lock(&queue->mutex);
    queue->running = false;
    pthread_cond_broadcast(&queue->not_empty);
    pthread_cond_broadcast(&queue->not_full);
    pthread_mutex_unlock(&queue->mutex);

    pthread_mutex_destroy(&queue->mutex);
    pthread_cond_destroy(&queue->not_empty);
    pthread_cond_destroy(&queue->not_full);
}

void print_command_queue(CommandQueue *queue)
{
    pthread_mutex_lock(&queue->mutex);

    printf("Command Queue:\n");
    printf("Front: %d, Rear: %d, Count: %d\n", queue->front, queue->rear, queue->count);
    for (int i = 0; i < queue->count; i++)
    {
        int index = (queue->front + i) % MAX_QUEUE_SIZE;
        printf("Command: %s, Params: %s, Timestamp: %ld\n", 
               queue->commands[index].command, 
               queue->commands[index].params, 
               queue->commands[index].timestamp);
    }

    pthread_mutex_unlock(&queue->mutex);
}