CC=gcc
CFLAGS=-g -Wall
OBJCS=main.c 
BIN=main

all:$(BIN)

main: $(OBJCS)
	$(CC) $(CFLAGS) $(OBJCS) -o main

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r main *.o
