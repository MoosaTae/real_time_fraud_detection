#ifndef COMMAND_HANDLER_H
#define COMMAND_HANDLER_H
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "handlers/mqtt_handler.h"

#define MAX_HANDLERS 32
#define MAX_PARAM_LENGTH 256

// Command handler function type
typedef bool (*command_handler_t)(const char *params, void *context);

typedef struct
{
    const char *command;
    command_handler_t handler;
    const char *description;
} CommandHandler;

// Command controller context
typedef struct
{
    CommandHandler handlers[MAX_HANDLERS];
    int handler_count;
    void *user_context;
} CommandController;

void init_command_controller(CommandController *controller, void *user_context);
bool execute_command(CommandController *controller, const char *command, const char *params);
bool handle_memory_check(const char *params, void *context);
bool handle_system_info(const char *params, void *context);
bool handle_temperature(const char *params, void *context);
#endif // COMMAND_HANDLER_H