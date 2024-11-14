CC = gcc
CFLAGS = -Wall -Werror -g -I./include -I ./src

LIBS = -lpthread -lpaho-mqtt3c -lsqlite3 -lcjson -lasound -lavcodec -lavformat -lavutil -lcurl -lssl -lcrypto -lm

TARGETS = command_service service_main
TARGETS = service_main
SOURCES = $(wildcard main/*.c src/*/*.c)
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGETS)

command_service: main/command_main.o $(filter-out main/service_main.o,$(OBJECTS))
	$(CC) -o $@ $^ $(LIBS)

service_main: main/service_main.o $(filter-out main/command_main.o,$(OBJECTS))
	$(CC) -o $@ $^ $(LIBS)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJECTS) $(TARGETS)

.PHONY: all clean
