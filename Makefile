BIN = game

CFLAGS = -std=c99 -Wall -Wextra -pedantic -Ofast -flto -march=native

LDFLAGS = -lm -lSDL2

CC = gcc

SRC = ./resources/*.c

all:
	$(CC) $(CFLAGS) $(SRC) $(LDFLAGS) -o $(BIN)

run:
	./$(BIN)

clean:
	rm -f $(BIN)
