#ifndef LOGGER_H
#define LOGGER_H

void init_logger();
void log_info(const char* message, char* database, char* table);
void log_init(const char *log_file);
void log_close(void);

#endif // LOGGER_H
