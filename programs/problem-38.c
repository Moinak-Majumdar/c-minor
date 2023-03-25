// 8. Make a C program of Addition of two numbers Using a recursive function.
#include <stdio.h>
#include <stdlib.h>
int y;
int add(int m, int n) {

    if (n == 0) {
        return m;
    }
    y = add(m, n - 1) + 1;
    return y;
}
int main() {

    int a, b, r;
    printf("\nEnter the two numbers: ");
    scanf("%d%d", &a, &b);
    r = add(a, b);
    printf("\nSum of two numbers is: %d", r);
    return 0;
}