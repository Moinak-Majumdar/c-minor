// 9. Make a C program to Find out the sum of series 1 + x2 /2! - x 3 /3!+....
#include <stdio.h>
#include <stdlib.h>
int fact(int n) {
    if(n == 0)
        return 1;
    return n * fact(n-1);
}
int main() {

    float x, sum, no_row;
    int i, n;
    printf("\nInput the value of x : ");
    scanf("%f", &x);
    printf("\nInput number of terms : ");
    scanf("%d", &n);
    sum = 1;
    no_row = 0;
    for (i = 2; i <= n; i++) {

        no_row = i * x / fact(i);
        if(i%2 == 0) {
            sum = sum + no_row;
        } else {
            sum = sum - no_row;
        }
    }
    printf("\nThe sum is : %3.3f", sum);
    return 0;
}