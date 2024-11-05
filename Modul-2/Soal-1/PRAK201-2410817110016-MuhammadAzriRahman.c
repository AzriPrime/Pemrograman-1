#include <stdio.h>

int main() {
    char nama[50], nim[15], kelas[3], tempatLahir[30], alamat[100], hobby[50], noHP[15];

    printf("Input\n");
    printf("Masukkan Nama: ");
    scanf(" %[^\n]", &nama);

    printf("Masukkan NIM: ");
    scanf(" %s", &nim);

    printf("Masukkan Kelas Paralel: ");
    scanf(" %s", &kelas);

    printf("Masukkan Tempat/Tanggal Lahir: ");
    scanf(" %[^\n]", &tempatLahir);

    printf("Masukkan Alamat: ");
    scanf(" %[^\n]", &alamat);

    printf("Masukkan Hobby: ");
    scanf(" %[^\n]", &hobby);

    printf("Masukkan No. HP: ");
    scanf(" %s", &noHP);

    printf("Output\n");
    printf("Nama                  : %s\n", nama);
    printf("NIM                   : %s\n", nim);
    printf("Kelas Paralel         : %s\n", kelas);
    printf("Tempat/Tanggal Lahir  : %s\n", tempatLahir);
    printf("Alamat                : %s\n", alamat);
    printf("Hobby                 : %s\n", hobby);
    printf("No. HP                : %s\n", noHP);
}
