#include <stdio.h>

void main() {
    int baris, kelipatan;

    printf("Masukan nilai baris dan kelipatan: ");
    scanf("%d %d", &baris, &kelipatan);

    int total = 0;

    for (int i = 1;i <= baris;i++) {
        int hasil_penjumlahan = 0;
        
        for (int j = i;j >= 1;j--) {
            hasil_penjumlahan += j*kelipatan;
            printf("(%d * %d)",j,kelipatan);
            if (j > 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", hasil_penjumlahan);
        total += hasil_penjumlahan;
    }
    printf("%d", total);
}