#include <stdio.h>
int reverse(int bil){
    int rev = 0;
    while (bil > 0) {
        int sisa = bil % 10;
        rev = rev * 10 + sisa;
        bil /= 10; 
    }
    return rev;
}
int main() {
    int A, B;
    scanf("%d %d",&A,&B);
    A=reverse(A);
    B=reverse(B);
    int C = A+B;
    printf("%d",reverse(C));
}
