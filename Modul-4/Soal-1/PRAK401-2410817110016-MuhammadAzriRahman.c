#include <stdio.h>

void main() {
    int kelipatan;
    char simbol;

    printf("Input Kelipatan dan simbol: ");
    scanf(" %d %c", &kelipatan, &simbol);

    for (int i = 1; i <= 50; i++) {
        if ((i % kelipatan) == 0) {
            printf("%c ", simbol);
        } else {
            printf("%d ", i);
        }
    }
}