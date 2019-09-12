.PHONY: clean, mrproper
CC = gcc
CFLAGS = -Og -Wall

all: main

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

main:
	$(CC) $(CFLAGS) -o $@ $+

clean:
	rm -f *.o core.*

mrproper: clean
	rm -f main
