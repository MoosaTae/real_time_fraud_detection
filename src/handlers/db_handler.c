#include "handlers/db_handler.h"
#define INIT_SQL_CMD "CREATE TABLE IF NOT EXISTS " DATA_TABLE " (\
    _id INTEGER PRIMARY KEY AUTOINCREMENT,\
    timestamp DATETIME DEFAULT CURRENT_TIMESTAMP,\
    value TEXT\
)"

#define APPEND_SQL_CMD "INSERT INTO " DATA_TABLE " (value) VALUES (?)"

#define QUERY_SQL_CMD "SELECT * FROM " DATA_TABLE " ORDER BY timestamp DESC LIMIT 1"

void system_event_db_init(const char *db_name)
{
    sqlite3 *db;

    if (sqlite3_open(db_name, &db) != SQLITE_OK)
    {
        fprintf(stderr, "Error opening %s database\n", db_name);
        sqlite3_close(db);
        return;
    }
    if (sqlite3_exec(db, INIT_SQL_CMD, NULL, NULL, NULL) != SQLITE_OK)
    {
        fprintf(stderr, "Error executing %s: %s\n", INIT_SQL_CMD, sqlite3_errmsg(db));
        return;
    }
    sqlite3_close(db);
}

// Initialize sound event database
void sound_event_db_init(const char *db_name)
{
    sqlite3 *db;

    if (sqlite3_open(db_name, &db) != SQLITE_OK)
    {
        fprintf(stderr, "Error opening %s database\n", db_name);
        sqlite3_close(db);
        return;
    }
    if (sqlite3_exec(db, INIT_SQL_CMD, NULL, NULL, NULL) != SQLITE_OK)
    {
        fprintf(stderr, "Error executing %s: %s\n", INIT_SQL_CMD, sqlite3_errmsg(db));
        return;
    }
    sqlite3_close(db);
}

void command_event_db_init(const char *db_name)
{
    sqlite3 *db;

    if (sqlite3_open(db_name, &db) != SQLITE_OK)
    {
        fprintf(stderr, "Error opening %s database\n", db_name);
        sqlite3_close(db);
        return;
    }
    if (sqlite3_exec(db, INIT_SQL_CMD, NULL, NULL, NULL) != SQLITE_OK)
    {
        fprintf(stderr, "Error executing %s: %s\n", INIT_SQL_CMD, sqlite3_errmsg(db));
        return;
    }
    sqlite3_close(db);
}

void model_event_db_init(const char *db_name)
{
    sqlite3 *db;

    if (sqlite3_open(db_name, &db) != SQLITE_OK)
    {
        fprintf(stderr, "Error opening %s database\n", db_name);
        sqlite3_close(db);
        return;
    }
    if (sqlite3_exec(db, INIT_SQL_CMD, NULL, NULL, NULL) != SQLITE_OK)
    {
        fprintf(stderr, "Error executing %s: %s\n", INIT_SQL_CMD, sqlite3_errmsg(db));
        return;
    }
    sqlite3_close(db);
}

// Log system event
int log_system_event(const char *db_name, const char *event_json)
{
    sqlite3 *db;
    sqlite3_stmt *stmt;

    if (sqlite3_open(db_name, &db) != SQLITE_OK)
    {
        fprintf(stderr, "Error opening %s database\n", db_name);
        sqlite3_close(db);
        return -1;
    }
    if (sqlite3_prepare_v2(db, APPEND_SQL_CMD, -1, &stmt, NULL) != SQLITE_OK)
    {
        fprintf(stderr, "Error executing %s: %s\n", APPEND_SQL_CMD, sqlite3_errmsg(db));
        return -1;
    }
    // Bind the provided JSON string to the SQL statement
    if (sqlite3_bind_text(stmt, 1, event_json, -1, SQLITE_STATIC) != SQLITE_OK)
    {
        fprintf(stderr, "Error binding value: %s\n", sqlite3_errmsg(db));
        sqlite3_finalize(stmt);
        sqlite3_close(db);
        return -1;
    }

    if (sqlite3_step(stmt) != SQLITE_DONE)
    {
        fprintf(stderr, "Error executing statement: %s\n", sqlite3_errmsg(db));
        return -1;
    }
    else
    {
        printf("Successfully logged system event: %s\n", event_json);
    }
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return 0;
}

// Log sound event
int log_sound_event(const char *db_name, const char *event_json)
{
    sqlite3 *db;
    sqlite3_stmt *stmt;

    if (sqlite3_open(db_name, &db) != SQLITE_OK)
    {
        fprintf(stderr, "Error opening %s database\n", db_name);
        sqlite3_close(db);
        return -1;
    }
    if (sqlite3_prepare_v2(db, APPEND_SQL_CMD, -1, &stmt, NULL) != SQLITE_OK)
    {
        fprintf(stderr, "Error executing %s: %s\n", APPEND_SQL_CMD, sqlite3_errmsg(db));
        return -1;
    }
    if (sqlite3_bind_text(stmt, 1, event_json, -1, SQLITE_STATIC) != SQLITE_OK)
    {
        fprintf(stderr, "Error binding value: %s\n", sqlite3_errmsg(db));
        sqlite3_finalize(stmt);
        sqlite3_close(db);
        return -1;
    }

    if (sqlite3_step(stmt) != SQLITE_DONE)
    {
        fprintf(stderr, "Error executing statement: %s\n", sqlite3_errmsg(db));
        return -1;
    }
    else
    {
        printf("Successfully logged sound event: %s\n", event_json);
    }
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return 0;
}

// Log command event
int log_command_event(const char *db_name, const char *event_json)
{
    sqlite3 *db;
    sqlite3_stmt *stmt;

    if (sqlite3_open(db_name, &db) != SQLITE_OK)
    {
        fprintf(stderr, "Error opening %s database\n", db_name);
        sqlite3_close(db);
        return -1;
    }
    if (sqlite3_prepare_v2(db, APPEND_SQL_CMD, -1, &stmt, NULL) != SQLITE_OK)
    {
        fprintf(stderr, "Error executing %s: %s\n", APPEND_SQL_CMD, sqlite3_errmsg(db));
        return -1;
    }
    if (sqlite3_bind_text(stmt, 1, event_json, -1, SQLITE_STATIC) != SQLITE_OK)
    {
        fprintf(stderr, "Error binding value: %s\n", sqlite3_errmsg(db));
        sqlite3_finalize(stmt);
        sqlite3_close(db);
        return -1;
    }

    if (sqlite3_step(stmt) != SQLITE_DONE)
    {
        fprintf(stderr, "Error executing statement: %s\n", sqlite3_errmsg(db));
        return -1;
    }
    else
    {
        printf("Successfully logged command event: %s\n", event_json);
    }
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return 0;
}

// Query last event from any database
const char *query_last_event(const char *db_name)
{
    sqlite3 *db;
    sqlite3_stmt *stmt;
    const char *last_value = NULL;

    if (sqlite3_open(db_name, &db) != SQLITE_OK)
    {
        fprintf(stderr, "Error opening %s database\n", db_name);
        sqlite3_close(db);
        return NULL;
    }
    if (sqlite3_prepare_v2(db, QUERY_SQL_CMD, -1, &stmt, NULL) != SQLITE_OK)
    {
        fprintf(stderr, "Error executing %s: %s\n", QUERY_SQL_CMD, sqlite3_errmsg(db));
        return NULL;
    }
    if (sqlite3_step(stmt) == SQLITE_ROW)
    {
        const char *timestamp = (const char *)sqlite3_column_text(stmt, 1);
        printf("Event timestamp: %s\n", timestamp);
        last_value = (const char *)sqlite3_column_text(stmt, 2);
    }
    sqlite3_finalize(stmt);
    sqlite3_close(db);
    return last_value;
}
