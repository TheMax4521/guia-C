#include <stdio.h>
#include <stdint.h>

int main(){
    unsigned int ui = 71U;
    signed long int sli = 9223372036854775807L;
    unsigned long long int ulli = 18446744073709551615ULL;

    printf("%d\n", ui);
    printf("%ld\n", sli);
    printf("%llo\n", ulli);

    double d = 10.0;
    float f = 10.0F;
    long double ld = 10.0L;

    printf("%f\n", d);
    printf("%f\n", f);
    printf("%Lf\n", ld);

    const int MAX = 100;
    const float PI = 3.14159;
    const int i = 1;

    printf("%d\n", MAX);
    printf("%f\n", PI);
    printf("%d\n", i);

    enum Color {RED = 1, GREEN = 2, BLUE = 4};
    enum Color c = RED;
    printf("%d\n", c );
    printf("%d\n", GREEN);
    printf("%d\n", BLUE);

    int mensaje_secreto[] = {116, 104, 101, 32, 103, 105, 102, 116, 32, 111, 102, 32, 
    119, 111, 114, 100, 115, 32, 105, 115, 32, 116, 104, 101, 32, 103, 105, 102, 116,
    32, 111, 102, 32, 100, 101, 99, 101, 112, 116, 105, 111, 110, 32, 97, 110, 100, 
    32, 105, 108, 108, 117, 115, 105, 111, 110};

    size_t length = sizeof(mensaje_secreto) / sizeof(int);
    char decoded[length];

    for (size_t i = 0; i < length; i++)
    {
        decoded[i] = (char) (mensaje_secreto[i]);
    }
    for (size_t i = 0; i < length; i++)
    {
        printf("%c", decoded[i]);
    }
    
    float v1 = 0.9;
    double v2 = 0.9;

    printf("%f\n", v1);
    printf("%f\n", v2);

    int float_a_int = (int) v1;
    int double_a_int = (int) v2;

    printf("%d\n", float_a_int);
    printf("%d\n", double_a_int);
}