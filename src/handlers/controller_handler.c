#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "handlers/mqtt_handler.h"
#include "handlers/command_handler.h"

bool register_command_handler(CommandController *controller,
                              const char *command,
                              command_handler_t handler,
                              const char *description)
{
    if (controller->handler_count >= MAX_HANDLERS)
    {
        return false;
    }

    controller->handlers[controller->handler_count].command = command;
    controller->handlers[controller->handler_count].handler = handler;
    controller->handlers[controller->handler_count].description = description;
    controller->handler_count++;
    return true;
}

void *controller_thread_function(void *arg)
{
    CommandQueue *queue = (CommandQueue *)arg;
    Command cmd;

    CommandController controller;
    init_command_controller(&controller, NULL);

    register_command_handler(&controller, "memcheck", handle_memory_check, "Check memory info");
    register_command_handler(&controller, "sysinfo", handle_system_info, "Display system information");
    register_command_handler(&controller, "temperature", handle_temperature, "Read CPU temperature");

    register_command_handler(&controller, "start_recording", handle_start_recording, "Start audio recording");
    register_command_handler(&controller, "stop_recording", handle_stop_recording, "Stop audio recording");
    register_command_handler(&controller, "recording_status", handle_recording_status, "Get recording status");
    
    while (queue->running)
    {
        if (dequeue_command(queue, &cmd))
        {
            printf("Processing command: %s with params: %s\n",
                   cmd.command, cmd.params);

            if (!execute_command(&controller, cmd.command, cmd.params))
            {
                printf("Command execution failed: %s\n", cmd.command);
            }
        }
    }

    return NULL;
}