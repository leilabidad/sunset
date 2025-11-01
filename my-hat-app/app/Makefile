CC = gcc
CFLAGS = -O2 -Wall

APP = bin/hat_monitor
SRC = src/hat_monitor.c

all: $(APP)

bin:
	mkdir -p bin

$(APP): $(SRC) | bin
	$(CC) $(CFLAGS) -o $@ $(SRC)

clean:
	rm -rf bin
