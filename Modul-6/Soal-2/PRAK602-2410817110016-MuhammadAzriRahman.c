#include <stdio.h>

void main() {
    int n;

    scanf("%d", &n);

    int zetsu_putih[n];
    int hasil[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &zetsu_putih[i]);
    }

    for (int i = 0; i < n; i++) {
        hasil[i] = zetsu_putih[i] * (i + 1);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", hasil[i]);
    }
    printf("\n");

}
