#include "handlers/command_handler.h"
#include "services/model_service.h"

void init_command_controller(CommandController *controller, void *user_context)
{
    controller->handler_count = 0;
    controller->user_context = user_context;
}

bool execute_command(CommandController *controller, const char *command, const char *params)
{
    for (int i = 0; i < controller->handler_count; i++)
    {
        if (strcmp(controller->handlers[i].command, command) == 0)
        {
            return controller->handlers[i].handler(params, controller->user_context);
        }
    }
    printf("Unknown command: %s\n", command);
    return false;
}

bool handle_memory_check(const char *params, void *context)
{
    FILE *meminfo = fopen("/proc/meminfo", "r");
    if (!meminfo)
    {
        printf("Failed to open meminfo\n");
        return false;
    }

    char line[256];
    while (fgets(line, sizeof(line), meminfo))
    {
        if (strstr(line, params))
        {
            printf("%s", line);
            fclose(meminfo);
            return true;
        }
    }
    fclose(meminfo);
    return false;
}

bool handle_system_info(const char *params, void *context)
{
    system("uname -a");
    return true;
}

bool handle_temperature(const char *params, void *context)
{
    FILE *temp = fopen("/sys/class/thermal/thermal_zone0/temp", "r");
    if (!temp)
    {
        printf("Failed to read temperature\n");
        return false;
    }

    int temp_val;
    fscanf(temp, "%d", &temp_val);
    printf("CPU Temperature: %.2f°C\n", temp_val / 1000.0);
    fclose(temp);
    return true;
}

bool handle_start_recording(const char *params, void *context)
{
    start_recording();

    // Publish status message back to MQTT
    mqtt_context_t *mqtt = (mqtt_context_t *)context;
    const char *status_msg = "{\"status\": \"recording_started\"}";
    mqtt_publish(mqtt, "status", status_msg);

    return true;
}

bool handle_stop_recording(const char *params, void *context)
{
    stop_recording();

    // Publish status message back to MQTT
    mqtt_context_t *mqtt = (mqtt_context_t *)context;
    const char *status_msg = "{\"status\": \"recording_stopped\"}";
    mqtt_publish(mqtt, "status", status_msg);

    return true;
}

bool handle_recording_status(const char *params, void *context)
{
    mqtt_context_t *mqtt = (mqtt_context_t *)context;
    char status_msg[100];
    snprintf(status_msg, sizeof(status_msg),
             "{\"status\": \"recording_%s\"}",
             is_recording() ? "active" : "inactive");
    mqtt_publish(mqtt, "status", status_msg);
    return true;
}

bool handle_deploy_model(const char *params, void *context)
{
    char *url = strdup(params);
    printf("Downloading model from: %s\n", url);

    char command[256];
    snprintf(command, sizeof(command), "wget -O file.zip %s", url);
    system(command);
    // check file is downlaod
    if (access("file.zip", F_OK) == -1)
    {
        printf("Failed to download model\n");
        return false;
    }
    system("unzip file -d download");
    return true;
}