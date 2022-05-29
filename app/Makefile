# Variables
CC=g++
CFLAGS=-Wall -g3
LDFLAGS=-lm -lpq
MKDIR=mkdir -p
DEL=rm -fr

carpetas:
	$(MKDIR) build dist

clean:
	$(DEL) build dist *.o

main.o: carpetas main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o build/main.o

all: carpetas main.o
	$(CC) $(CFLAGS) -o dist/app build/main.o $(LDFLAGS)
	$(DEL) build

.PHONY: all
.DEFAULT_GOAL := all