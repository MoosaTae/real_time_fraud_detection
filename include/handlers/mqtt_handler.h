#ifndef MQTT_HANDLER_H
#define MQTT_HANDLER_H

#include <stdbool.h>
#include <MQTTClient.h>
#include <pthread.h>
#include <time.h>

#define MAX_COMMAND_LENGTH 256
#define MAX_QUEUE_SIZE 20

// Command structure
typedef struct
{
    char command[MAX_COMMAND_LENGTH];
    char params[MAX_COMMAND_LENGTH];
    time_t timestamp;
} Command;

// Command queue structure
typedef struct
{
    Command commands[MAX_QUEUE_SIZE];
    int front;
    int rear;
    int count;
    pthread_mutex_t mutex;
    pthread_cond_t not_empty;
    pthread_cond_t not_full;
    bool running;
} CommandQueue;

typedef struct
{
    MQTTClient client;
    char *topic;
    bool connected;
} mqtt_context_t;

typedef void (*mqtt_callback_t)(const char *topic, const char *payload);

bool mqtt_init(mqtt_context_t *ctx, const char *broker, const char *client_id);
bool mqtt_connect(mqtt_context_t *ctx);
bool mqtt_publish(mqtt_context_t *ctx, const char *topic, const char *payload);
bool mqtt_publish_binary(mqtt_context_t *ctx, const char *topic, const void *payload, int payloadlen);
void *mqtt_subscriber_thread(void *arg);
void mqtt_cleanup(mqtt_context_t *ctx);

// Command queue functions
bool enqueue_command(CommandQueue *queue, const char *command, const char *params);
bool dequeue_command(CommandQueue *queue, Command *cmd);
void init_command_queue(CommandQueue *queue);
void cleanup_command_queue(CommandQueue *queue);
void print_command_queue(CommandQueue *queue);

#endif // MQTT_HANDLER_H
