CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = tamaño hola enteros operaciones estructuras estructuras_avanzadas punteros

all: $(TARGET)

hola: hola.o
	$(CC) $(CFLAGS) $^ -o $@

hola.o: hola.c
	$(CC) $(CFLAGS) -c $< -o $@

tamaño: tamaño.o
	$(CC) $(CFLAGS) $^ -o $@

tamaño.o: tamaño.c
	$(CC) $(CFLAGS) -c $< -o $@

enteros: enteros.o
	$(CC) $(CFLAGS) $^ -o $@

enteros.o: enteros.c
	$(CC) $(CFLAGS) -c $< -o $@

operaciones: operaciones.o
	$(CC) $(CFLAGS) $^ -o $@

operaciones.o: operaciones.c
	$(CC) $(CFLAGS) -c $< -o $@

estructuras: estructuras.o
	$(CC) $(CFLAGS) $^ -o $@

estructuras.o: estructuras.c
	$(CC) $(CFLAGS) -c $< -o $@

estructuras_avanzadas: estructuras_avanzadas.o
	$(CC) $(CFLAGS) $^ -o $@

estructuras_avanzadas.o: estructuras_avanzadas.c
	$(CC) $(CFLAGS) -c $< -o $@

punteros: punteros.o
	$(CC) $(CFLAGS) $^ -o $@

punteros.o: punteros.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: clean all