CC = gcc
CFLAGS = -Wall -Werror -I./include
LDFLAGS = -lpthread -lmosquitto -lsqlite3 -lcjson

SOURCES = $(wildcard main/*.c src/*/*.c)
OBJECTS = $(SOURCES:.c=.o)

TARGETS = command_service sound_service

all: $(TARGETS)

command_service: main/command_main.o $(filter-out main/service_main.o,$(OBJECTS))
	$(CC) -o $@ $^ $(LDFLAGS)

sound_service: main/service_main.o $(filter-out main/command_main.o,$(OBJECTS))
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $

clean:
	rm -f $(OBJECTS) $(TARGETS)

.PHONY: all clean
