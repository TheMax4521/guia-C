#include <stdio.h>

int factorial(int n);

int main(void){
    int n;
    printf("ingresar numero:");
    scanf("%d", &n);
    factorial(n);
    return 0;
}


int factorial(int n){
    if (n == 0)
    {
        printf("0\n");
        return 0;
    }
    if (n == 1)
    {
        printf("1\n");
        return 0;
    }else{
        for (int i = 1; i <= n; i++)
        {
            int n = n * i; 
        }
    printf("%d\n", n);
    }
    return 0;
    
}