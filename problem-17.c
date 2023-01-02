// hl4 wap to find a number is prime or not.
#include <stdio.h>

int main() {
    int n, i, is_prime = 1;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime) {
        printf("\n%d is a prime number.\n", n);
    } else {
        printf("\n%d is not a prime number.\n", n);
    }

    return 0;
}
