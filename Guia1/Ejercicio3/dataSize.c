#include <stdio.h>
#include <stdint.h>

int dataSizeWithLibrary() {
    int8_t i8 = -8;
    int16_t i16 = -16;
    int32_t i32 = -32;
    int64_t i64 = -64;
    uint8_t ui8 = 8;
    uint16_t ui16 = 16;
    uint32_t ui32 = 32;
    uint64_t ui64 = 64;

    printf("int8_t(%lu): %d\n", sizeof(i8), i8);
    printf("int16_t(%lu): %d\n", sizeof(i16), i16);
    printf("int32_t(%lu): %d\n", sizeof(i32), i32);
    printf("int64_t(%lu): %ld\n", sizeof(i64), i64);
    printf("uint8_t(%lu): %d\n", sizeof(ui8), ui8);
    printf("uint16_t(%lu): %d\n", sizeof(ui16), ui16);
    printf("uint32_t(%lu): %d\n", sizeof(ui32), ui32);
    printf("uint64_t(%lu): %ld\n", sizeof(ui64), ui64);
    return 0;
}


int dataSizeWithOutLibrary() {
    char c = 'a';
    unsigned char uc = 'b';
    short s = 1;
    unsigned short us = 2;
    int i = 3;
    unsigned u = 4;
    long l = 5;
    unsigned long ul = 6;

    printf("char(%lu): %d\n", sizeof(c), c);
    printf("unsigned char(%lu): %d\n", sizeof(uc), uc);
    printf("short(%lu): %d\n", sizeof(s), s);
    printf("unsigned short(%lu): %d\n", sizeof(us), us);
    printf("int(%lu): %d\n", sizeof(i), i);
    printf("unsigned(%lu): %d\n", sizeof(u), u);
    printf("long(%lu): %ld\n", sizeof(l), l);
    printf("unsigned long(%lu): %ld\n", sizeof(ul), ul);
    return 0;
}

int main() {
    printf("===DATASIZE WITHOUTLIBRARY===\n");
    dataSizeWithOutLibrary();
    printf("===DATASIZE WITHLIBRARY===\n");
    dataSizeWithLibrary();
    return 0;
}