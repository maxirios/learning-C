CC     = gcc
CFLAGS = -Wall -Wextra -g $(EXTRA)

# Single-file exercises in the repo root: NN-name.c -> build/NN-name
SRCS = $(wildcard *.c)
BINS = $(SRCS:%.c=build/%)

# Multi-file exercises (one folder each, every .c in the folder is linked)
DIR_BINS = build/12-headers build/13-static

all: $(BINS) $(DIR_BINS)

build/%: %.c | build
	$(CC) $(CFLAGS) $< -o $@

build/12-headers: $(wildcard 12-headers/*.c) $(wildcard 12-headers/*.h) | build
	$(CC) $(CFLAGS) $(wildcard 12-headers/*.c) -o $@

build/13-static: $(wildcard 13-static/*.c) $(wildcard 13-static/*.h) | build
	$(CC) $(CFLAGS) $(wildcard 13-static/*.c) -o $@

# 16-volatile has no main: it is compiled to assembly only
asm: | build
	$(CC) -O2 -S 16-volatile/wait_for_flag.c -o build/wait_for_flag.s

build:
	mkdir -p build

clean:
	rm -rf build

.PHONY: all asm clean
