#include <stdio.h>
#include <string.h>

void main() {
    char kode[100];
    char pesan[100];
    char pesanEnkripsi[100];
    int bintang = 0;
    int pagar = 0;

    printf("Input\n");
    scanf("%[^\n] ", kode);
    scanf("%[^\n]", pesan);

    if (strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    } else {
        for (int i = 0; i<strlen(kode); i++) {
            if (kode[i] == ' ' && pesan[i] == ' ') {
                pesanEnkripsi[i] = ' ';
            }
            else if (kode[i] == pesan[i]) {
                pesanEnkripsi[i] = '*';
                bintang++;
            } else {
                pesanEnkripsi[i] = '#';
                pagar++;
        } }
        pesanEnkripsi[strlen(pesan)] = '\0';

        printf("Output\n");
        printf("%s\n", pesanEnkripsi);
        printf("* = %d\n", bintang);
        printf("# = %d\n", pagar);
        
        if (bintang >= pagar) {
            printf("Pesan Asli\n");
        } else {
            printf("Pesan Palsu\n");
        }
    }
}