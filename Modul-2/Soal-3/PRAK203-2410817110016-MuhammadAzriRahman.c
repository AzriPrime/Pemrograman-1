#include <stdio.h>

void main() {
    float a, b, i, j, x, y;
    float hasil;

    printf("Masukan Nilai a, b, i, j, x , y (secara berurutan):");
    scanf(" %f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);


    hasil = (float)((a-b)*(i/j)-(x+y));
    printf("Hasil dari a dikurang b dikali dengan i dibagi j dikurang dengan x ditambah y adalah %.3f",hasil);
}