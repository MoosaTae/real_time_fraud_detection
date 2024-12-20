#ifndef CONFIG_H
#define CONFIG_H
#include <stdbool.h>

typedef struct
{
    char *mqtt_broker;
    char *mqtt_client_id;
    char *mqtt_subscribe_topic;
    char *mqtt_publish_topic;
    int mqtt_port;

    char *db_connection;

    int sample_size;
    int buffer_size;
    char *device;

    char *model_path;
} config_t;

extern config_t config;

bool load_config(const char *config_path);
void print_config(void);

#endif // CONFIG_H
