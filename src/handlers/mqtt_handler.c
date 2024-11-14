#include "handlers/mqtt_handler.h"
#include "utils/config.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cjson/cJSON.h>

#define MQTT_TIMEOUT 10000L

// static int on_message(void *context, char *topicName, int topicLen, MQTTClient_message *message)
// {
//     mqtt_callback_t callback = (mqtt_callback_t)context;
//     if (callback)
//     {
//         callback(topicName, message->payload);
//     }
//     MQTTClient_freeMessage(&message);
//     MQTTClient_free(topicName);
//     return 1; // Return 1 to indicate successful handling
// }

bool mqtt_init(mqtt_context_t *ctx, const char *broker, const char *client_id)
{
    if (!ctx || !broker || !client_id)
    {
        return false;
    }

    int rc = MQTTClient_create(&ctx->client, broker, client_id, MQTTCLIENT_PERSISTENCE_NONE, NULL);
    if (rc != MQTTCLIENT_SUCCESS)
    {
        printf("Failed to create MQTT client, return code %d\n", rc);
        return false;
    }

    ctx->connected = false;
    ctx->topic = NULL;
    return true;
}

bool mqtt_connect(mqtt_context_t *ctx)
{
    if (!ctx || ctx->connected)
    {
        return false;
    }

    MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;
    conn_opts.keepAliveInterval = 20;
    conn_opts.cleansession = 1;

    int rc = MQTTClient_connect(ctx->client, &conn_opts);
    if (rc != MQTTCLIENT_SUCCESS)
    {
        printf("Failed to connect to MQTT broker, return code %d\n", rc);
        return false;
    }

    ctx->connected = true;
    return true;
}

void *mqtt_subscriber_thread(void *arg)
{
    CommandQueue *queue = (CommandQueue *)arg;

    // Set up MQTT connection and subscription here
    MQTTClient client;
    MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;
    MQTTClient_create(&client, config.mqtt_broker, config.mqtt_client_id,
                      MQTTCLIENT_PERSISTENCE_NONE, NULL);
    conn_opts.keepAliveInterval = 20;
    conn_opts.cleansession = 1;
    int rc;
    char command_topic[20];

    if (MQTTClient_connect(client, &conn_opts) != MQTTCLIENT_SUCCESS)
    {
        fprintf(stderr, "Failed to connect to MQTT broker\n");
        return NULL;
    }

    sprintf(command_topic, "%s", config.mqtt_subscribe_topic);
    printf("MQTT Subscribing to topic: %s\n", command_topic);

    if ((rc = MQTTClient_subscribe(client, command_topic, 0)) != MQTTCLIENT_SUCCESS)
    {
        printf("Failed to subscribe, return code %d\n", rc);
        MQTTClient_disconnect(client, 10000);
        MQTTClient_destroy(&client);
        pthread_exit(NULL);
    }
    while (queue->running)
    {
        printf("Waiting for messages...\n");
        char *topicName = NULL;
        int topicLen;
        MQTTClient_message *message = NULL;

        int rc = MQTTClient_receive(client, &topicName, &topicLen, &message, MQTT_TIMEOUT);
        if (rc == MQTTCLIENT_SUCCESS && message != NULL)
        {
            cJSON *json = cJSON_Parse(message->payload);
            if (json)
            {
                cJSON *cmd = cJSON_GetObjectItem(json, "command");
                cJSON *params = cJSON_GetObjectItem(json, "params");
                if (cmd && cJSON_IsString(cmd))
                {
                    // Add command to queue
                    enqueue_command(queue,
                                    cmd->valuestring,
                                    params ? params->valuestring : "");
                    printf("Received command: %s\n", cmd->valuestring);
                }

                cJSON_Delete(json);
            }

            MQTTClient_freeMessage(&message);
            MQTTClient_free(topicName);
        }
        if (rc != MQTTCLIENT_SUCCESS)
        {
            printf("MQTTClient_receive returned code %d\n", rc);
            printf("Subscribed to topic: %s\n", command_topic);
        }
    }

    MQTTClient_disconnect(client, 10000);
    MQTTClient_destroy(&client);
    return NULL;
}

bool mqtt_publish(mqtt_context_t *ctx, const char *topic, const char *payload)
{
    if (!ctx || !ctx->connected || !topic || !payload)
    {
        return false;
    }

    MQTTClient_message pubmsg = MQTTClient_message_initializer;
    pubmsg.payload = (void *)payload;
    pubmsg.payloadlen = strlen(payload);
    pubmsg.qos = 0;
    pubmsg.retained = 0;

    MQTTClient_deliveryToken token;
    int rc = MQTTClient_publishMessage(ctx->client, topic, &pubmsg, &token);
    if (rc != MQTTCLIENT_SUCCESS)
    {
        printf("Failed to publish message, return code %d\n", rc);
        return false;
    }

    rc = MQTTClient_waitForCompletion(ctx->client, token, MQTT_TIMEOUT);
    if (rc != MQTTCLIENT_SUCCESS)
    {
        printf("Message delivery failed, return code %d\n", rc);
        return false;
    }

    return true;
}

void mqtt_cleanup(mqtt_context_t *ctx)
{
    if (!ctx)
    {
        return;
    }

    if (ctx->connected)
    {
        MQTTClient_disconnect(ctx->client, MQTT_TIMEOUT);
        ctx->connected = false;
    }

    MQTTClient_destroy(&ctx->client);

    if (ctx->topic)
    {
        free(ctx->topic);
        ctx->topic = NULL;
    }
}

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