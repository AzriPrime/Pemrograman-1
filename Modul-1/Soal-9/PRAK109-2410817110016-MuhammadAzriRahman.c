#include <stdio.h>

void main() {
    int pasukan = 958730;
    char *pahlawan[] = {"Zilong", "Ling", "Baxia", "Wanwan", "Change"};
    int jumlahpahlawan = sizeof(pahlawan) / sizeof(pahlawan[0]);

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n",pasukan);
    printf("Jumlah pahlawan = %d\n",jumlahpahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", pasukan / jumlahpahlawan);
}