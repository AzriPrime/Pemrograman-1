#include <stdio.h>

void main() 
{
    int a = 9; int b = 5;int x = 8;int y = 8;
    int hasil = (a % b) + (x % y);

    printf("Variabel a bernilai %d\nVariabel b bernilai %d\nVariabel x bernilai %d\nVariabel y bernilai %d\n", a,b,x,y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d",hasil);
}