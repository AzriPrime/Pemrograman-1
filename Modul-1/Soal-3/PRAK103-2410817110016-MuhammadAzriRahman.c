#include <stdio.h>

void main() 
{
    int a = 9; int b = 6;int x = 10;int y = 7;
    float hasil = (float)(a + b) * x / y;

    printf("Variabel a bernilai %.0f\nVariabel b bernilai %d\nVariabel x bernilai %d\nVariabel y bernilai %d\n", a,b,x,y);
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f",hasil);
}