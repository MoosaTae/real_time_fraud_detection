#ifndef MQTT_HANDLER_H
#define MQTT_HANDLER_H

#include <stdbool.h>
#include <MQTTClient.h>

typedef struct {
    MQTTClient client;
    char *topic;
    bool connected;
} mqtt_context_t;

typedef void (*mqtt_callback_t)(const char *topic, const char *payload);

bool mqtt_init(mqtt_context_t *ctx, const char *broker, const char *client_id);
bool mqtt_connect(mqtt_context_t *ctx);
bool mqtt_subscribe(mqtt_context_t *ctx, const char *topic, mqtt_callback_t callback);
bool mqtt_publish(mqtt_context_t *ctx, const char *topic, const char *payload);
void mqtt_cleanup(mqtt_context_t *ctx);

#endif // MQTT_HANDLER_H
