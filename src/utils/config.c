#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <cjson/cJSON.h>
#include "utils/config.h"
#include "utils/logger.h"

config_t config;

bool load_config(const char *config_path) {
    FILE *file = fopen(config_path, "r");
    if (!file) {
        fprintf(stderr, "Error: Cannot open config file\n");
        return false;
    }

    // Read the file
    fseek(file, 0, SEEK_END);
    long length = ftell(file);
    fseek(file, 0, SEEK_SET);

    char *content = (char *)malloc(length + 1);
    if (!content) {
        fclose(file);
        return false;
    }

    fread(content, 1, length, file);
    content[length] = '\0';
    fclose(file);

    // Parse JSON
    cJSON *json = cJSON_Parse(content);
    free(content);

    if (!json) {
        fprintf(stderr, "Error: Failed to parse config JSON\n");
        return false;
    }

    // Get MQTT section
    cJSON *mqtt = cJSON_GetObjectItem(json, "mqtt");
    if (mqtt) {
        cJSON *broker = cJSON_GetObjectItem(mqtt, "broker");
        cJSON *port = cJSON_GetObjectItem(mqtt, "port");
        cJSON *clientId = cJSON_GetObjectItem(mqtt, "clientId");
        cJSON *subscribe_topic = cJSON_GetObjectItem(mqtt, "subscribe_topic");
        cJSON *publish_topic = cJSON_GetObjectItem(mqtt, "publish_topic");

        if (broker && broker->valuestring) {
            char broker_url[256];
            snprintf(broker_url, sizeof(broker_url), "%s:%d", 
                    broker->valuestring, 
                    port ? port->valueint : 1883);
            config.mqtt_broker = strdup(broker_url);
        }
        
        if (clientId && clientId->valuestring) {
            config.mqtt_client_id = strdup(clientId->valuestring);
        }
        
        if (subscribe_topic && subscribe_topic->valuestring) {
            config.mqtt_subscribe_topic = strdup(subscribe_topic->valuestring);
        }
        if (publish_topic && publish_topic->valuestring) {
            config.mqtt_publish_topic = strdup(publish_topic->valuestring);
        }
    }

    // Get database section
    cJSON *database = cJSON_GetObjectItem(json, "database");
    if (database) {
        cJSON *host = cJSON_GetObjectItem(database, "host");
        cJSON *port = cJSON_GetObjectItem(database, "port");
        cJSON *name = cJSON_GetObjectItem(database, "name");

        if (host && port && name) {
            char conn_str[256];
            snprintf(conn_str, sizeof(conn_str), "host=%s port=%d dbname=%s",
                    host->valuestring, port->valueint, name->valuestring);
            config.db_connection = strdup(conn_str);
        }
    }

    // Get sound detection section
    cJSON *sound = cJSON_GetObjectItem(json, "sound_detection");
    if (sound) {
        cJSON *sample_rate = cJSON_GetObjectItem(sound, "sample_rate");
        if (sample_rate) {
            config.sample_size = sample_rate->valueint;
        }
    }

    cJSON_Delete(json);
    return true;
}

void print_config(void) {
    printf("Configuration:\n");
    printf("MQTT Broker: %s\n", config.mqtt_broker ? config.mqtt_broker : "not set");
    printf("MQTT Client ID: %s\n", config.mqtt_client_id ? config.mqtt_client_id : "not set");
    printf("MQTT Topic: %s\n", config.mqtt_subscribe_topic ? config.mqtt_subscribe_topic : "not set");
    printf("MQTT Topic: %s\n", config.mqtt_publish_topic ? config.mqtt_publish_topic : "not set");
    printf("DB Connection: %s\n", config.db_connection ? config.db_connection : "not set");
    printf("Sample Size: %d\n", config.sample_size);
}
