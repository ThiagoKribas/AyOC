#include <stdio.h>
int main() {
    int i = 10;
    while(i--){
        printf("i = %d\n",i); // imprime o no el 0?
    };

    for(int i = 9; i >= 0; --i) {
        printf("i = %d\n", i);
    };
    return 0;
}

