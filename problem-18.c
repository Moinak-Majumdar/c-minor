// hl5 
#include <stdio.h>
int main() {
    int n, reversed_n = 0, remainder;

    printf("\nEnter a number : ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reversed_n = reversed_n * 10 + remainder;
        n /= 10;
    }

    printf("\nReversed number is : %d", reversed_n);
}

