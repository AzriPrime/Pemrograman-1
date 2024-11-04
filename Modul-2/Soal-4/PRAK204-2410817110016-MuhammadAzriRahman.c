#include <stdio.h>
#define PHI 3.14

void main() {
    int r, t;
    float volume, luas, keliling;

    printf("Masukan Nilai Jari-Jari dan Tinggi Bejana: ");
    scanf("%d %d", &r, &t);

    volume = (float)(PHI*r*r*t);
    luas = (float)(2*PHI*r*(r+t));
    keliling = (float)(2*PHI*r);

    printf("Volume: %.2f\nLuas = %.2f\nKeliling = %.2f", volume, luas, keliling);


}