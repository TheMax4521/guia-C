#include <stdio.h>

int main(){
    char c = 100;
    unsigned char uc = 154;
    short s = -8712;
    unsigned short us = -132;
    int i = 1234;
    unsigned int ui = 9874;
    long l = 12345678;
    unsigned long ul = 978123;

    printf("char(%lu): %d \n", sizeof(c), c);
    printf("unsigned char(%lu): %d \n", sizeof(uc), uc);
    printf("short(%lu): %d \n", sizeof(s), s);
    printf("unsigned short(%lu): %d \n", sizeof(us), us);
    printf("int(%lu): %d \n", sizeof(i), i);
    printf("unsigned int(%lu): %d \n", sizeof(ui), ui);
    printf("long(%lu): %ld \n", sizeof(l), l);
    printf("unsigned long(%lu): %ld \n", sizeof(ul), ul);
    
    return 0;
}