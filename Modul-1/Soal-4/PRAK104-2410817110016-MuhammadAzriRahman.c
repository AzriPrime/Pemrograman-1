#include <stdio.h>

void main()
{
    int A = 400000;int B = 350000;
    int disA = A - (A * 13 / 100); int disB = B - (B* 21 /100);

    printf("Harga sepatu A adalah %d\n", A);
    printf("Harga sepatu B adalah %d\n", B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n",disA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d",disB);
}