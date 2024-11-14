#ifndef CONTROLLER_HANDLER_H
#define CONTROLLER_HANDLER_H

#include "handlers/mqtt_handler.h"
#include "handlers/command_handler.h"

void init_command_controller(CommandController *controller, void *context);
bool register_command_handler(CommandController *controller, const char *command, command_handler_t handler, const char *description);
bool execute_command(CommandController *controller, const char *command, const char *params);
void *controller_thread_function(void *arg);

#endif // CONTROLLER_HANDLER_H