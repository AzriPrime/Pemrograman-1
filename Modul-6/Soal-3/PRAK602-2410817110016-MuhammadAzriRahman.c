#include <stdio.h>

void main() {
    int n1, n2;
    printf("Input\n");
    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
    } else {
        int array[2][n1];

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n1; j++) {
                scanf("%d", &array[i][j]);
            }
        }
        printf("Output\n");
        for (int j = 0; j < n1; j++) {
            printf("%d ", array[0][j] * array[1][j]);
        }
        printf("\n");
    }

}
