// hl4  wap to check the given number is armstrong or not.
#include <stdio.h>
#include <math.h>

int main() {
    int n, original_n, remainder, result = 0, n_digits = 0;

    
    printf("\nEnter a number: ");
    scanf("%d", &n);

    original_n = n;

    while (n != 0) {
        n /= 10;
        n_digits++;
    }

    
    n = original_n;
    while (n != 0) {
        remainder = n % 10;
        result += pow(remainder, n_digits);
        n /= 10;
    }

    if (result == original_n) {
        printf("\n%d is an Armstrong number.", original_n);
    } else {
        printf("\n%d is not an Armstrong number.", original_n);
    }

    return 0;
}
