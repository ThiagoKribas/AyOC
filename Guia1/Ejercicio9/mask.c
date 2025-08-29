#include <stdio.h>
#include <stdint.h>

int main() {
    const int32_t a = 0xFFFFFFFF;
    const int32_t b = 0xF;
    const int32_t maskA = 0xE0000000;
    const int32_t maskB = 0x07; 

    const int32_t maskedA = a & maskA;
    const int32_t maskedB = b & maskB;

    printf("a: %d\n", a);

    printf("MaskedA: %d\n", maskedA);
    printf("MaskedB: %d\n", maskedB);

    printf("MaskedA == MaskedB: %d\n", maskedA == (maskedB << 29));

    return 0;
}