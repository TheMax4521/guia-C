#include <stdio.h>
#include <stdint.h>

int main(){
    int a = 5;
    int b = 3;
    int c = 2;
    int d = 1;

    int op1 = a + b * c / d;
    printf("se espera 11, resultado:%x\n", op1);

    int op2 = a % b;
    printf("se espera 2, resultado: %x\n", op2);

    int op3 = a == b;
    int op4 = a != b;
    printf("se espera FALSE, resultado: %x\n", op3);
    printf("se espera TRUE, resultado: %x\n", op4);

    int op5 = a & b;
    int op6 = a | b;
    printf("se espera 0001 es decir 1, resultado: %x\n", op5);
    printf("se espera 0111 es decir 7 , resultado: %x\n", op6);

    int op7 = a << 1;
    printf("se espera 1010 es decir 10, resultado: %x\n", op7);

    int op8 = a >> 1;
    printf("se espera 0010 es decir 2, resultado: %x\n", op8);

    int op9 = a += b;
    int op10 = a -= b;
    int op11 = a *= b;
    int op12 = a /= b;
    int op13 = a %= b;

    printf("se espera 8, resultado: %x\n", op9);
    printf("se espera 5, resultado: %x\n", op10);
    printf("se espera 15, resultado: %x\n", op11);
    printf("se espera 5, resultado: %x\n", op12);
    printf("se espera 2, resultado: %x\n", op13);

    int w = 0;
    while (w <= 3)
    {
        w++;
        int i1 = w;
        printf("valor con i++ es %d\n", i1);
    }
    

    int z = 0;
    while (z <3)
    {
        ++z;
        int i2 = z;
        printf("valor con ++i es %d\n", i2);
    }
    
    uint32_t valor1 = 0xe0000000;
    uint32_t valor2 = 0x00000007;
    uint32_t mascara_superior = 0xE0000000;
    uint32_t mascara_inferior = 0x00000007;

    uint32_t parte_superior_1 = (valor1 & mascara_superior) >> 29;
    uint32_t parte_inferior_2 = valor2 & mascara_inferior;

    printf("los bits superiores son %u\n", parte_superior_1);
    printf("los bits inferiores son %u\n", parte_inferior_2);

    if (parte_superior_1 == parte_inferior_2)
    {
        printf("son iguales\n");
    }
    else
    {
        printf("son distintos\n");
    }

}