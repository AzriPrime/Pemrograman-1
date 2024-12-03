#include <stdio.h>

void main() {
    int pilihan = 0;
    float pertama, kedua;

    while (pilihan != 5) {
        printf("Pilih program \n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukan pilihan: ");
        scanf("%d", &pilihan);

        if (pilihan > 5 || pilihan < 1) {
            printf("Input anda salah, silahkan coba lagi\n"); }
        else if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Azri");
            break; } 
        else {
            printf("Masukan nilai pertama: ");
            scanf(" %f", &pertama);

            printf("Masukan nilai kedua: ");
            scanf(" %f", &kedua);}
        
        switch (pilihan)
        {
        case 1:
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", pertama, kedua, pertama+kedua);
            break;
        case 2:
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", pertama, kedua, pertama-kedua);
            break;
        case 3:
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", pertama, kedua, pertama*kedua);
            break;
        case 4:
            printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", pertama, kedua, pertama/kedua);
            break;
        }
        printf("\n");}
        }
