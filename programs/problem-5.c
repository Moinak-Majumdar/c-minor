//hl7   Write a C program to find maximum between two numbers.

#include <stdio.h>
 int main() {
    int a, b;

    printf("\nEnter two integer ==> ");
    scanf("%d %d",&a, &b);

    if(a == b) {
        printf("\bBoth numbers are equal.");
    }else if(a>b) {
        printf("\n%d is bigger than %d",a,b);
    }else {
        printf("\n%d is bigger than %d",b,a);
    }
 }