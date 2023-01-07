//hl5 wap to to find factorial of a no.
#include<stdio.h>
int main () {
    int n,fact=1,i=1;
    printf("\nEnter the number to find factorial : ");
    scanf("%d",&n);
    while (i<=n) {
        fact *= i;
        i++;
    }
    printf("\nFactorial : %d",fact);
}