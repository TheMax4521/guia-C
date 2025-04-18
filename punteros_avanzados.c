#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

int main(){
    char palabra[100];
    char *p = palabra;
    printf("Ingrese string:");
    scanf("%s", palabra);
    for (int i = 0; *p != '\0'; i++)
    {
        palabra[i] = toupper(*p);
    }
    printf("%s", palabra);
    printf("\n");
    
}