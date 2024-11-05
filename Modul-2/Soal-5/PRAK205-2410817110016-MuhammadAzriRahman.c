#include <stdio.h>
#include <math.h>

void main() {
    int a, b;
    int alas, tinggi, keliling, luas;

    printf("Masukan Nilai A dan B: ");
    scanf("%d %d", &a, &b);

    alas = sqrt(b*b-a*a);
    tinggi = a;
    keliling = a+b+alas;
    luas = (alas * tinggi) /2;

    printf("Alas = %d cm\nTinggi = %d cm\nKeliling = %d cm\nLuas = %d cm^2\n",alas, tinggi, keliling, luas);

}