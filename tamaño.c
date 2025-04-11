#include <stdio.h>
#include <stdint.h>

int main(){
    char c = 100;
    unsigned char uc = 154;
    short s = -8712;
    unsigned short us = -132;
    int i = 1234;
    unsigned int ui = 9874;
    long l = 12345678;
    unsigned long ul = 978123;
    uint8_t u8 = 23;
    uint16_t u16 = 40;
    uint32_t u32 = 1234;
    uint64_t u64 = 4321;

    printf("char(%lu): %d \n", sizeof(c), c);
    printf("unsigned char(%lu): %d \n", sizeof(uc), uc);
    printf("short(%lu): %d \n", sizeof(s), s);
    printf("unsigned short(%lu): %d \n", sizeof(us), us);
    printf("int(%lu): %d \n", sizeof(i), i);
    printf("unsigned int(%lu): %d \n", sizeof(ui), ui);
    printf("long(%lu): %ld \n", sizeof(l), l);
    printf("unsigned long(%lu): %ld \n", sizeof(ul), ul);
    printf("uint8_t(%lu): %d \n", sizeof(u8), u8);
    printf("uint16_t(%lu): %d \n", sizeof(u16), u16);
    printf("uint32_t(%lu): %d \n", sizeof(u32), u32 );
    printf("uint64_t(%lu): %ld \n", sizeof(u64), u64);
    
    return 0;
}