//hl6    Write a c program to add 2 numbers entered by the user and display the result.

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number ==>");
    scanf("%d",&a);
    printf("\nEnter second number ==>");
    scanf("%d",&b);

    printf("\n%d + %d is %d",a,b,a+b);
}