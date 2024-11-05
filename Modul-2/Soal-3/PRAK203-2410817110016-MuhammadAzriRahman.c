#include <stdio.h>

void main() {
    int a, b, i, j, x, y;
    float hasil;

    printf("Masukan Nilai a, b, i, j, x , y :");
    scanf(" %d %d %d %d %d %d", &a, &b, &i, &j, &x, &y);


    hasil = ((a-b)*(i*1.f/j)-(x+y));
    printf("Hasil dari %d dikurang %d dikali dengan %d dibagi %d dikurang dengan %d ditambah %d adalah %.3f",a,b,i,j,x,y,hasil);
}