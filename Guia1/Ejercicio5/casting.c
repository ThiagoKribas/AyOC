#include <stdio.h>


int codigoSecreto() {
    int mensaje_secreto[] = {116, 104, 101, 32, 103, 105, 102, 116, 32, 111, 102, 32, 119, 111, 114, 100, 115, 32, 105, 115, 32, 116, 104, 101, 32, 103, 105, 102, 116, 32, 111, 102, 32, 100, 101, 99, 101, 112, 116, 105, 111, 110, 32, 97, 110, 100, 32, 105, 108, 108, 117, 115, 105, 111, 110};

    size_t length = sizeof(mensaje_secreto) / sizeof(int);
    char decoded[length];

    for (size_t i = 0; i < length; i++) {
        decoded[i] = (char) mensaje_secreto[i];
    }

    for (size_t i = 0; i < length; i++) {
        printf("%c", decoded[i]);
    }
    printf("\n");
    return 0;
}

int casting() {
    const float fl = 0.9f;
    const double dbl = 0.1;
    
    printf("float: %f\n", fl);
    printf("double: %f\n", dbl);
    
    int ifl = (int) fl;
    int idbl = (int) dbl;
    
    printf("===CASTING A INT===\n");
    printf("intfl: %d\n", ifl);
    printf("intdbl: %d\n", idbl);
    
    return 0;
}

int main() {
    printf("===CASTING===\n");
    casting();
    printf("===CODIGOSECRETO===\n");
    codigoSecreto();
    return 0;
}