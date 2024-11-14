#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <pthread.h>
// #include <sqlite3.h>
// #include "handlers/db_handler.h"
// #include "handlers/mqtt_handler.h"
#include "services/sound_service.h"
// #include "services/model_service.h"
#include "utils/config.h"
#include "utils/logger.h"

// Global control flags
volatile sig_atomic_t running = 1;
// volatile int system_mode = MODE_IDLE; // Default mode

// Mutex for thread synchronization
// pthread_mutex_t mode_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t resource_mutex = PTHREAD_MUTEX_INITIALIZER;

// Thread handles
pthread_t sound_thread;
// pthread_t model_thread;
// pthread_t mqtt_thread;
// pthread_t controller_thread;

// Configuration structure
typedef struct
{
    char mqtt_broker[256];
    char mqtt_topic[128];
    int sample_rate;
    char sound_device[64];
    char db_path[256];
} SystemConfig;

// Function prototypes
void signal_handler(int signum);
// void *controller_thread_function(void *arg);
void cleanup_resources(void);
int initialize_system(SystemConfig *config);
// void log_system_event(sqlite3 *db, const char *event_type, const char *details);

// Signal handler for graceful shutdown
void signal_handler(int signum)
{
    printf("\nReceived signal %d. Initiating shutdown...\n", signum);
    running = 0;
}

// Controller thread function
// void *controller_thread_function(void *arg)
// {
//     SystemConfig *config = (SystemConfig *)arg;
//     sqlite3 *db;

//     // Open database connection for logging
//     if (sqlite3_open(config->db_path, &db) != SQLITE_OK)
//     {
//         fprintf(stderr, "Failed to open database\n");
//         return NULL;
//     }

//     while (running)
//     {
//         pthread_mutex_lock(&mode_mutex);
//         int current_mode = system_mode;
//         pthread_mutex_unlock(&mode_mutex);

//         switch (current_mode)
//         {
//         case MODE_RECORDING:
//             // Handle recording mode
//             log_system_event(db, "MODE_CHANGE", "Entered recording mode");
//             break;

//         case MODE_PREDICTION:
//             // Handle prediction mode
//             log_system_event(db, "MODE_CHANGE", "Entered prediction mode");
//             break;

//         case MODE_TRAINING:
//             // Handle training mode
//             log_system_event(db, "MODE_CHANGE", "Entered training mode");
//             break;

//         case MODE_IDLE:
//             // Handle idle mode
//             usleep(100000); // Sleep to prevent CPU hogging
//             break;
//         }

//         // Check for MQTT commands and update mode accordingly
//         // This would be implemented in the MQTT handler
//     }

//     sqlite3_close(db);
//     return NULL;
// }

// Initialize system components
int initialize_system(SystemConfig *config)
{
    // Initialize logging
    if (init_logger(config->db_path) != 0)
    {
        fprintf(stderr, "Failed to initialize logger\n");
        return -1;
    }

    // Initialize sound service
    if (init_sound_service(config->sound_device, config->sample_rate) != 0)
    {
        fprintf(stderr, "Failed to initialize sound service\n");
        return -1;
    }

    // Initialize model service
    // if (init_model_service() != 0)
    // {
    //     fprintf(stderr, "Failed to initialize model service\n");
    //     return -1;
    // }

    // Initialize MQTT handler
    // if (init_mqtt_handler(config->mqtt_broker, config->mqtt_topic) != 0)
    // {
    //     fprintf(stderr, "Failed to initialize MQTT handler\n");
    //     return -1;
    // }

    return 0;
}

// Cleanup system resources
void cleanup_resources(void)
{
    // Cancel and join threads
    // pthread_cancel(sound_thread);
    // pthread_cancel(model_thread);
    pthread_cancel(mqtt_thread);
    // pthread_cancel(controller_thread);

    // pthread_join(sound_thread, NULL);
    // pthread_join(model_thread, NULL);
    pthread_join(mqtt_thread, NULL);
    // pthread_join(controller_thread, NULL);

    // Cleanup mutexes
    // pthread_mutex_destroy(&mode_mutex);
    pthread_mutex_destroy(&resource_mutex);

    // Cleanup services
    cleanup_sound_service();
    // cleanup_model_service();
    // cleanup_mqtt_handler();
    cleanup_logger();
}

int main(int argc, char *argv[])
{
    SystemConfig config;

    signal(SIGINT, signal_handler);
    signal(SIGTERM, signal_handler);

    if (load_config("config/config.json", &config) != 0)
    {
        fprintf(stderr, "Failed to load configuration\n");
        return EXIT_FAILURE;
    }

    // Initialize system components
    if (initialize_system(&config) != 0)
    {
        fprintf(stderr, "System initialization failed\n");
        return EXIT_FAILURE;
    }

    // Create threads
    // pthread_create(&sound_thread, NULL, sound_service_thread, NULL);
    // pthread_create(&model_thread, NULL, model_service_thread, NULL);
    pthread_create(&mqtt_thread, NULL, mqtt_handler_thread, NULL);
    // pthread_create(&controller_thread, NULL, controller_thread_function, &config);

    // Main loop
    while (running)
    {
        // Main thread can handle system-wide monitoring and health checks
        sleep(1);
    }

    // Cleanup and exit
    cleanup_resources();
    printf("System shutdown complete\n");
    return EXIT_SUCCESS;
}