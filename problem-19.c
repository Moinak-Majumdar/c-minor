// hl2 wap to find sum of digits of a number.
#include<stdio.h>
int main() {
    int n, sum = 0, remainder;

    printf("\nEnter a number : ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }

    printf("\nSum of digits of a number %d is : %d",n,sum);

    return 0;
}
