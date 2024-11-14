#include "../../include/handlers/mqtt_handler.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MQTT_TIMEOUT 10000L

static void on_message(void *context, char *topicName, int topicLen, MQTTClient_message *message) {
    mqtt_callback_t callback = (mqtt_callback_t)context;
    if (callback) {
        callback(topicName, message->payload);
    }
    MQTTClient_freeMessage(&message);
    MQTTClient_free(topicName);
}

bool mqtt_init(mqtt_context_t *ctx, const char *broker, const char *client_id) {
    if (!ctx || !broker || !client_id) {
        return false;
    }

    int rc = MQTTClient_create(&ctx->client, broker, client_id, MQTTCLIENT_PERSISTENCE_NONE, NULL);
    if (rc != MQTTCLIENT_SUCCESS) {
        printf("Failed to create MQTT client, return code %d\n", rc);
        return false;
    }

    ctx->connected = false;
    ctx->topic = NULL;
    return true;
}

bool mqtt_connect(mqtt_context_t *ctx) {
    if (!ctx || ctx->connected) {
        return false;
    }

    MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;
    conn_opts.keepAliveInterval = 20;
    conn_opts.cleansession = 1;

    int rc = MQTTClient_connect(ctx->client, &conn_opts);
    if (rc != MQTTCLIENT_SUCCESS) {
        printf("Failed to connect to MQTT broker, return code %d\n", rc);
        return false;
    }

    ctx->connected = true;
    return true;
}

bool mqtt_subscribe(mqtt_context_t *ctx, const char *topic, mqtt_callback_t callback) {
    if (!ctx || !ctx->connected || !topic || !callback) {
        return false;
    }

    int rc = MQTTClient_subscribe(ctx->client, topic, 0);
    if (rc != MQTTCLIENT_SUCCESS) {
        printf("Failed to subscribe to topic %s, return code %d\n", topic, rc);
        return false;
    }

    MQTTClient_setCallbacks(ctx->client, (void*)callback, NULL, on_message, NULL);

    ctx->topic = strdup(topic);
    return true;
}

bool mqtt_publish(mqtt_context_t *ctx, const char *topic, const char *payload) {
    if (!ctx || !ctx->connected || !topic || !payload) {
        return false;
    }

    MQTTClient_message pubmsg = MQTTClient_message_initializer;
    pubmsg.payload = (void*)payload;
    pubmsg.payloadlen = strlen(payload);
    pubmsg.qos = 0;
    pubmsg.retained = 0;

    MQTTClient_deliveryToken token;
    int rc = MQTTClient_publishMessage(ctx->client, topic, &pubmsg, &token);
    if (rc != MQTTCLIENT_SUCCESS) {
        printf("Failed to publish message, return code %d\n", rc);
        return false;
    }

    rc = MQTTClient_waitForCompletion(ctx->client, token, MQTT_TIMEOUT);
    if (rc != MQTTCLIENT_SUCCESS) {
        printf("Message delivery failed, return code %d\n", rc);
        return false;
    }

    return true;
}

void mqtt_cleanup(mqtt_context_t *ctx) {
    if (!ctx) {
        return;
    }

    if (ctx->connected) {
        MQTTClient_disconnect(ctx->client, MQTT_TIMEOUT);
        ctx->connected = false;
    }

    MQTTClient_destroy(&ctx->client);

    if (ctx->topic) {
        free(ctx->topic);
        ctx->topic = NULL;
    }
}
