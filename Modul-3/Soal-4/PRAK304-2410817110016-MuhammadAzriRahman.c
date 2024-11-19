#include <stdio.h>

void main() {
    int a;

    printf("Masukan Angka antara 0-99:\0");
    scanf(" %d", &a);

    if (a > 99) {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    } else if (a == 0) {
        printf("Nol");
    } else if (a > 0 && a < 10) {
        printf("Satuan");
    } else if (a == 10 || a > 19) {
        printf("Puluhan");
    } else {
        printf("Belasan");
    }
}