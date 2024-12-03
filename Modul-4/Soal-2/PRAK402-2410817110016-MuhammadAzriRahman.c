#include <stdio.h>

void main() {
    int maksimal;

    printf("Masukkan bilangan maksimal: ");
    scanf("%d", &maksimal);

    for (int i = 1; i <= maksimal; i += 2) {
        printf("%d ", i);
    }
    printf("\n");


    for (int j = maksimal; j >= 1; j--) {
        if (j % 2 == 0) {
            printf("%d ", j);
        }
    }
    printf("\n");
    }

