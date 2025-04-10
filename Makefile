CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = tamaño hola

all: $(TARGET)

hola: hola.o
	$(CC) $(CFLAGS) hola.o -o hola

hola.o: hola.c
	$(CC) $(CFLAGS) -c hola.c -o hola.o

tamaño: tamaño.o
	$(CC) $(CFLAGS) tamaño.o -o tamaño

tamaño.o: tamaño.c
	$(CC) $(CFLAGS) -c tamaño.c -o tamaño.o

clean:
	rm *.o $(TARGET)

.PHONY: clean all