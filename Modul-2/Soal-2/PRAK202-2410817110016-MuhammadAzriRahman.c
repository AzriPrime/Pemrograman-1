#include <stdio.h>

void main() {
    float a, b;
    
    printf("Masukan Nilai Pertama: ");
    scanf(" %f", &a);

    printf("Masukan Nilai Kedua: ");
    scanf(" %f", &b);

    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.2f\" adalah \"%.2f\"",a,b, a + b);
}