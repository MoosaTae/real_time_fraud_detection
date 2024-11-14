#ifndef DB_HANDLER_H
#define DB_HANDLER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>

// Structures for query results

#define SYSTEM_DB_NAME "/home/super/integration-2/log/system_events.db"
#define SOUND_DB_NAME "/home/super/integration-2/log/sound_events.db"
#define COMMAND_DB_NAME "/home/super/integration-2/log/command_events.db"
#define MODEL_DB_NAME "/home/super/integration-2/log/model_events.db"

// Table name
#define DATA_TABLE "data_table"

// Function prototypes
void system_event_db_init(const char *db_name);
void sound_event_db_init(const char *db_name);
void command_event_db_init(const char *db_name);
void model_event_db_init(const char *db_name);

int log_system_event(const char *db_name, const char *event_json);
int log_sound_event(const char *db_name, const char *event_json);
int log_command_event(const char *db_name, const char *event_json);
int l_event(const char *db_name, const char *event_json);

const char *query_last_event(const char *db_name);

#endif // DB_HANDLER_H
