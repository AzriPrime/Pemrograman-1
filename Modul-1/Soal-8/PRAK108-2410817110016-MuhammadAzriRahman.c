#include <stdio.h>

void main(){
    float putaran = 5;
    float jarak = 14;
    float keliling = jarak / putaran;
    float phi = 3.14;
    float jarijari = (keliling) / (2 * phi) ;
    
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n",putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n",jarak);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jarijari);
}