// hl5 wap to find gcd and lcm of two numbers.
#include <stdio.h>
int main() {
    int n1, n2, i, gcd, lcm;

    printf("\nEnter two numbers: ");
    scanf("%d%d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    lcm = (n1 * n2) / gcd;

    printf("\nGCD = %d", gcd);
    printf("\nLCM = %d", lcm);
    return 0;
}
