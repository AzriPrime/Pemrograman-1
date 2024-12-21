#include <stdio.h>

void main() {
    int n;

    printf("Input\n");
    scanf("%d", &n);

    int matriksA[n][n];
    int matriksB[n][n];
    int matriksHasil[n][n];

    printf("Matriks A\n");
    for (int i = 0; i < n; i++) {
        for (int j =0; j < n; j++) {
            scanf("%d", &matriksA[i][j]);
        }
    }
    printf("Matriks B\n");
    for (int i = 0; i < n; i++) {
        for (int j =0; j < n; j++) {
            scanf("%d", &matriksB[i][j]);
        }
    }
    printf("Output\n");
    printf("Matriks A*B\n");
    for (int i = 0; i < n; i++) {
        for (int j =0; j < n; j++) {
            matriksHasil[i][j] = 0;
            for (int k = 0; k < n; k++) {
                matriksHasil[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriksHasil[i][j]);
        }
        printf("\n");
    }
}