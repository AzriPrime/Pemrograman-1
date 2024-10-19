#include <stdio.h>

void main() 
{
    float a = 4; int b = 8;int c = 3;
    float hasil = a * b / c;

    printf("Variabel a bernilai %.0f\nVariabel b bernilai %d\nVariabel c bernilai %d\n", a,b,c);
    printf("Hasil dari a dikali b dibagi c adalah %.6f",hasil);
}