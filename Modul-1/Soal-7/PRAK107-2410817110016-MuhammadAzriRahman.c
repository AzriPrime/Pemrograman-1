#include <stdio.h>


void main(){
int a = 4; int b = 5;int c = 7;
int keliling = a + b + c;
int Harga = 85000;

printf("Diketahui :\n");
printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a,b,c);
printf("Keliling Tanah Pak Dengklek adalah %d\n",keliling);
printf("Harga tanah Per Meter adalah %d\n",Harga);
printf("Jawaban :\nBiaya yang diperlukan Pak Dengklek adalah : Rp %d",Harga * keliling);
}
