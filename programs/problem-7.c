// hl7 Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include <stdio.h>

int main () {
    int a,b,c;

    printf("Enter 3 angles of a triangle ABC ==> ");
    scanf("%d %d %d", &a, &b, &c);

    if(a+b+c == 180) {
        printf("\nValid triangle");
    } else {
        printf("\nInvalid triangle");
    }
}