#ifndef LOGGER_H
#define LOGGER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>

// Structures for query results
#define SYSTEM_DB_NAME "system_events.db"
#define SOUND_DB_NAME "sound_events.db"
#define COMMAND_DB_NAME "command_events.db"
#define MODEL_DB_NAME "model_events.db"

// Table name
#define DATA_TABLE "data_table"

// SQL commands
#define INIT_SQL_CMD "CREATE TABLE IF NOT EXISTS " DATA_TABLE " (\
    _id INTEGER PRIMARY KEY AUTOINCREMENT,\
    timestamp DATETIME DEFAULT CURRENT_TIMESTAMP,\
    value TEXT\
)"

#define APPEND_SQL_CMD "INSERT INTO " DATA_TABLE " (value) VALUES (?)"

#define QUERY_SQL_CMD "SELECT * FROM " DATA_TABLE " ORDER BY timestamp DESC LIMIT 1"

// Function prototypes
void system_event_db_init(const char *db_name);
void sound_event_db_init(const char *db_name);
void command_event_db_init(const char *db_name);
void model_event_db_init(const char *db_name);

int log_system_event(const char *db_name, const char *event_json);
int log_sound_event(const char *db_name, const char *event_json);
int log_command_event(const char *db_name, const char *event_json);
int log_model_event(const char *db_name, const char *event_json);

const char *query_last_event(const char *db_name);

#endif // LOGGER_H
