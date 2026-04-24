# Makefile für Array-Programme in C

CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGETS = arrays arrays_erweitert

all: $(TARGETS)

arrays: arrays.c
	$(CC) $(CFLAGS) arrays.c -o arrays

arrays_erweitert: arrays_erweitert.c
	$(CC) $(CFLAGS) arrays_erweitert.c -o arrays_erweitert

clean:
	rm -f $(TARGETS)

run_arrays: arrays
	./arrays

run_erweitert: arrays_erweitert
	./arrays_erweitert

help:
	@echo "Verfügbare Befehle:"
	@echo "  make              - Kompiliert alle Programme"
	@echo "  make arrays       - Kompiliert arrays.c"
	@echo "  make arrays_erweitert - Kompiliert arrays_erweitert.c"
	@echo "  make run_arrays   - Kompiliert und führt arrays aus"
	@echo "  make run_erweitert - Kompiliert und führt arrays_erweitert aus"
	@echo "  make clean        - Löscht alle kompilierten Programme"

.PHONY: all clean run_arrays run_erweitert help
