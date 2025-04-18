#include <stdio.h>
#include <stdint.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nombre[100];
    int edad;
}persona_t;

persona_t* crear_persona(const char* nombre, int edad){
    persona_t* nueva = malloc(sizeof(persona_t));

    if (nueva == NULL)
    {
        return NULL;
    }
    
    strcpy(nueva -> nombre, nombre);
    nueva -> edad = edad;
    return nueva;

}

int main(){
    persona_t* pr = crear_persona("Pepe", 23);
    if (pr != NULL)
    {
        printf("Nombre: %s\n", pr -> nombre);
        printf("Edad: %d\n", pr -> edad);
    }
    free(pr);

    char palabra[100];
    printf("Ingrese string:");
    fgets(palabra, sizeof(palabra), stdin);
    for (char *p = palabra; *p != '\0'; p++)
    {
        *p = toupper(*p);
    }
    printf("%s", palabra);
    printf("\n");
    
}