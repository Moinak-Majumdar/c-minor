//hl7 Write a c program to calculate the area and perimeter of a circle.

#include <stdio.h>

#define PI 3.14f

int main() {
    float r;

    printf("Enter radius of the circle ==> ");
    scanf("%f", &r);

    printf("\nArea of the circle is %0.3f ", PI*r*r);
    printf("\nPerimeter of the circle is %0.3f ", 2*PI*r);
}