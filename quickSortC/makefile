CC=gcc
CFLAGS=-I.

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

quickSort: quicksort.c
	$(CC) -o quickSort quicksort.c