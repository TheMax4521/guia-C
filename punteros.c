#include <stdio.h>
#include <stdint.h>

int main()
{
    int x = 42;
    int *p = &x;

    printf("Direccion de X: %p Valor: %d\n", (void*) &x, x);
    printf("Direccion de p: %p Valor: %p\n", (void*) &p, (void*) p);
    printf("Valor de lo que apunta p: %d\n", *p);

    int8_t  memoria[4] = {0, -15, 3, -123};
    for (int i = 0; i < 4; i++)
    {
        uint8_t *x = (uint8_t*) &(memoria[i]);
        int8_t *y = &memoria[i];
        printf("Dir de x: %-20p ||  Valor: %-20d\n", (void*) x, *x);
        printf("Dir de y: %-20p ||  Valor: %-20d\n", (void*) y, *y);
    }
    printf("\n\n");
    printf("le sumamos 2\n\n");

    for (int i = 0; i < 4; i++)
    {
        uint8_t *x = (uint8_t*) &(memoria[i]);
        int8_t *y = &memoria[i];
        int p = *x;
        int q = *y;
        p += 2;
        q +=2;
        printf("Dir de x: %-20p ||  Valor: %-20d\n", (void*) x, p);
        printf("Dir de y: %-20p ||  Valor: %-20d\n", (void*) y, q);
    }
    
    
}
