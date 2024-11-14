#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <unistd.h>
#include <pthread.h>
// #include <sqlite3.h>
// #include "handlers/db_handler.h"
#include "handlers/mqtt_handler.h"
// #include "services/sound_service.h"
// #include "services/model_service.h"
#include "utils/config.h"
#include "utils/logger.h"

// Global control flags
volatile sig_atomic_t running = 1;

// Mutex for thread synchronization
pthread_mutex_t mode_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t resource_mutex = PTHREAD_MUTEX_INITIALIZER;

// Thread handles
pthread_t sound_thread;
pthread_t model_thread;
pthread_t mqtt_thread;
pthread_t controller_thread;

// MQTT context
mqtt_context_t mqtt_ctx;

// Function prototypes
void *controller_thread_function(void *arg);
void cleanup_resources(void);
int initialize_system(void);
// void log_system_event(sqlite3 *db, const char *event_type, const char *details);

// Initialize system components
int initialize_system(void)
{
    // // Initialize logging
    // if (init_logger(config.db_connection) != 0)
    // {
    //     fprintf(stderr, "Failed to initialize logger\n");
    //     return -1;
    // }

    // // Initialize sound service
    // if (init_sound_service(config.sample_size) != 0)
    // {
    //     fprintf(stderr, "Failed to initialize sound service\n");
    //     return -1;
    // }

    // Initialize model service
    // if (init_model_service() != 0)
    // {
    //     fprintf(stderr, "Failed to initialize model service\n");
    //     return -1;
    // }

    // Initialize MQTT handler
    printf("Initializing MQTT handler\n");
    printf("Broker: %s\n", config.mqtt_broker);
    printf("Topic: %s\n", config.mqtt_subscribe_topic);
    printf("Client ID: %s\n", config.mqtt_client_id);

    if (!mqtt_init(&mqtt_ctx, config.mqtt_broker, config.mqtt_client_id))
    {
        fprintf(stderr, "Failed to initialize MQTT handler\n");
        return -1;
    }

    return 0;
}

void *controller_thread_function(void *arg)
{
    CommandQueue *queue = (CommandQueue *)arg;
    Command cmd;

    while (queue->running)
    {
        if (dequeue_command(queue, &cmd))
        {
            printf("Processing command: %s with params: %s\n",
                   cmd.command, cmd.params);
        }
    }

    return NULL;
}

void cleanup_command_queue(CommandQueue *queue)
{
    pthread_mutex_lock(&queue->mutex);
    queue->running = false;
    pthread_cond_broadcast(&queue->not_empty);
    pthread_cond_broadcast(&queue->not_full);
    pthread_mutex_unlock(&queue->mutex);

    pthread_mutex_destroy(&queue->mutex);
    pthread_cond_destroy(&queue->not_empty);
    pthread_cond_destroy(&queue->not_full);
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
    // cleanup_sound_service();
    // cleanup_model_service();
    mqtt_cleanup(&mqtt_ctx);
    // cleanup_logger();
}

int main(int argc, char *argv[])
{
    // Load configuration first
    if (!load_config("config/config.json"))
    {
        fprintf(stderr, "Failed to load configuration\n");
        return EXIT_FAILURE;
    }

    // Print loaded configuration for debugging
    print_config();

    // Initialize system components
    if (initialize_system() != 0)
    {
        fprintf(stderr, "System initialization failed\n");
        return EXIT_FAILURE;
    }

    CommandQueue cmd_queue;
    init_command_queue(&cmd_queue);

    // Create threads
    // pthread_create(&sound_thread, NULL, sound_service_thread, NULL);
    // pthread_create(&model_thread, NULL, model_service_thread, NULL);
    pthread_create(&mqtt_thread, NULL, mqtt_subscriber_thread, &cmd_queue);
    pthread_create(&controller_thread, NULL, controller_thread_function, &cmd_queue);

    // Main loop
    while (running)
    {
        // Main thread can handle system-wide monitoring and health checks
        sleep(1);
    }

    cleanup_resources();
    cleanup_command_queue(&cmd_queue);
    printf("System shutdown complete\n");
    return EXIT_SUCCESS;
}
