// hl7 wap c program to print all the numbers divisible by 3 and 5 with in a range.
#include<stdio.h>
int main () {
    int start, end, i;

    
    printf("\nEnter the start of the range : ");
    scanf("%d", &start);
    printf("\nEnter the end of the range : ");
    scanf("%d", &end);

    printf("\nNumbers divisible by 3 and 5 are : ");
    for (i = start; i <= end; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
        }
    }

}