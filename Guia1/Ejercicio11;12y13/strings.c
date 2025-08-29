#include <stdio.h>

int main() {
    int arr[4] = {1, 2, 3, 4};
    int len = 4;
    printf("arr:");
    for(int i = 0; i < len; i++) {
        printf("%d", arr[i]);
    }

    printf("\nArrRotado: ");

    for(int i = 0; i < len; i++) {
        int a = arr[3 - i];
        arr[3 - i] = arr[i];
        arr[i] = a;
        printf("%d", arr[i]);
    }

    printf("\n");

    return 0;
}