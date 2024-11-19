#include <stdio.h>

void main()
{
    int bil = -1;
    
    while (bil > 100 || bil < 0) {
        printf("Masukan nilai 0-100:");
        scanf("%d", &bil);
    }
    
    if (bil >= 80) {
        printf("A\n");
    }
    else if (bil < 80 && bil >= 70) {
        printf("B\n");
    }
    else if (bil < 70 && bil >= 60) {
        printf("C\n");
    }
    else if (bil < 60 && bil >= 50) {
        printf("D\n");
    }
    else {
        printf("E\n");
    }
}