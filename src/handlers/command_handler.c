#include "handlers/command_handler.h"

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