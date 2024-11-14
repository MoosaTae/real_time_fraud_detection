#include <signal.h>

#include "utils/config.h"
#include "utils/logger.h"
#include "handlers/mqtt_handler.h"
#include "handlers/db_handler.h"

static volatile sig_atomic_t running = 1;

void handle_mqtt_message(const char *topic, const char *payload) {
    printf("handle_mqtt_message starting...");
    cJSON *json = cJSON_Parse(payload);
    if (!json) {
        LOG_ERROR("Failed to parse JSON payload");
        return;
    }

    // Extract command and value
    cJSON *cmd = cJSON_GetObjectItem(json, "command");
    cJSON *value = cJSON_GetObjectItem(json, "value");

    if (cmd && value && cJSON_IsString(cmd) && cJSON_IsString(value)) {
        // Log command
        db_log_command(cmd->valuestring, value->valuestring);

        // Handle command
        if (strcmp(cmd->valuestring, "service") == 0) {
            if (strcmp(value->valuestring, "start") == 0) {
                system("sudo systemctl start sound_detection.service");
                LOG_INFO("Sound detection service started");
            }
            else if (strcmp(value->valuestring, "stop") == 0) {
                system("sudo systemctl stop sound_detection.service");
                LOG_INFO("Sound detection service stopped");
            }
        }
        else if (strcmp(cmd->valuestring, "memCheck") == 0) {
            handle_memory_check(value->valuestring);
        }
    }

    cJSON_Delete(json);
}

int main() {
    init_logger();
    log_info("Starting command handler service...");
    init_mqtt_handler();
    return 0;
}
