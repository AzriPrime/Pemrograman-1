#include <stdio.h>
#include <math.h>

void main() {
    //diketahui segitiga siku-siku dengan sisi abc
    int a = 12;
    int c = 5;
    int b = sqrt((a*a) + (c*c));

    int keliling = a + b + c;
    int luas = (c * a) /2;

    printf("Sisi A = %d\nSisi B = %d\nSisi C = %d\n",a,b,c);
    printf("Keliling = %d\nLuas = %d\n",keliling,luas);

}