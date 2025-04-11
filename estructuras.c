#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(){
    for (int i = 10; i > 0; i--)
    {
       printf("i = %d\n", i);
    }

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a)/sizeof(a[0]);
    int b[n];
    int k = 5;
    printf("arreglo original:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    printf("arreglo modificado:");

    for (int i = 0; i < n; i++)
    {
        if (i - k < 0)
        {
            b[n + (i - k)] = a[i];
        } else{
            b[i - k] = a[i];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    
    printf("\n");

    int veces[] = {0, 0, 0, 0, 0, 0};
    int cantidad_de_tiradas = 100;
    int longitud = sizeof(veces)/sizeof(veces[0]);

    for (int i = 0; i < cantidad_de_tiradas; i++)
    {
        int dado = (rand() % 6);
        veces[dado] = veces[dado] + 1;
    }

    for (int i = 0; i < longitud; i++)
    {
        printf("%d ", veces[i]);
    }
    printf("\n");

}