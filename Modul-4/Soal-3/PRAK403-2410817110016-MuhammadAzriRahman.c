#include <stdio.h>

void main() {
    int angka1, angka2;

    printf("Masukan 2 angka: ");
    scanf(" %d %d", &angka1, &angka2);

    int a = angka1, b = angka2;
    if (angka1 > angka2) {
        for (int i = b; i <= angka1; i++) {
            printf("%d %d", a, b);
            if (angka1 > b)
                printf(" - ");
            b++;
            a--;
        }
    }
    else if (angka2 > angka1) {
        for (int i = b; b >= angka1; i--) {
            printf("%d %d",a, b);
            if (angka2 > a)
                printf(" - ");
            b--;
            a++;
        }}
    else {
        printf("%d %d", a,b);
    }
}