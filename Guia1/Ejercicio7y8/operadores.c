#include <stdio.h>

void diffAcum() {
    short a = 0;
    short b = 0;
    

    for(int i = 0; i < 5; i++) {
        printf("++a: %d\n", ++a);
        printf("b++: %d\n", b++);
    }
    return;
}

void operadores() {
    int a = 5;
    int b = 3;
    int c = 2;
    int d = 1;

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);

    printf("a + b * c / d: %d\n", a + b * c / d);
    printf("a %% b: %d\n", a % b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("~a: %d\n", ~a);
    printf("a && b: %d, a || b: %d\n", a && b, a || b);
    printf("a << 1: %d\n", a << 1);
    printf("a >> 1: %d\n", a >> 1); 
    printf("a += b: %d\n", a += b);
    printf("a -= b: %d\n", a -= b);
    printf("a *= b: %d\n", a *= b);
    printf("a /= b: %d\n", a /= b);
    printf("a %%= b: %d\n", a %= b);
    return;
}

int main() {
    printf("===OPERADORES===\n");
    operadores();
    printf("===DIFF i++ ++i===\n");
    diffAcum();
    return 0;    
}