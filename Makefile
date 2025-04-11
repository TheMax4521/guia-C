CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = tamaño hola enteros operaciones

all: $(TARGET)

hola: hola.o
	$(CC) $(CFLAGS) hola.o -o hola

hola.o: hola.c
	$(CC) $(CFLAGS) -c hola.c -o hola.o

tamaño: tamaño.o
	$(CC) $(CFLAGS) tamaño.o -o tamaño

tamaño.o: tamaño.c
	$(CC) $(CFLAGS) -c tamaño.c -o tamaño.o

enteros: enteros.o
	$(CC) $(CFLAGS) enteros.o -o enteros

enteros.o: enteros.c
	$(CC) $(CFLAGS) -c enteros.c -o enteros.o

operaciones: operaciones.o
	$(CC) $(CFLAGS) operaciones.o -o operaciones

operaciones.o: operaciones.c
	$(CC) $(CFLAGS) -c operaciones.c -o operaciones.o

clean:
	rm *.o $(TARGET)

.PHONY: clean all