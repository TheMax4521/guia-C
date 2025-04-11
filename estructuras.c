#include <stdio.h>
#include <stdint.h>

int main(){
    for (int i = 10; i > 0; i--)
    {
       printf("i = %d\n", i);
    }

    int a[] = {1, 2, 3, 4};
    int n = sizeof(a)/sizeof(a[0]);
    int b[n];
    printf("arreglo original:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    printf("arreglo modificado:");

    for (int i = 0; i < n; i++)
    {
        if (i - 1 < 0)
        {
            b[n - 1] = a[i];
        } else{
            b[i-1] = a[i];
        }
     printf("%d ", b[i]);   
    }
    
    

    
}