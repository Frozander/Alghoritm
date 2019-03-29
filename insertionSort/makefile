CC=gcc
CFLAGS=-I.

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

insertionSort: insertionsort.c
	$(CC) -o insertionSort insertionsort.c