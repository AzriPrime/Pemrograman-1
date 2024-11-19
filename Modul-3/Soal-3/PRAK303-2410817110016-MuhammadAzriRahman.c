#include <stdio.h>

void main() {
    int a;

    printf("Masukan Angka:");
    scanf("%d", &a);

    if (a == 0) {
        printf("nol");
    } else if (a > 0) {
        printf("positif");
    } else {
        printf("negatif"); }
}