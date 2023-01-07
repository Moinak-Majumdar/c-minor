// hl7 wap to add even numbers in a range.
#include<stdio.h>
int main () {
    int start, end, sum, i;

    printf("\nEnter the start of the range : ");
    scanf("%d", &start);
    printf("\nEnter the end of the range : ");
    scanf("%d", &end);

    for (i = start; i <= end; i++) {
        if(i%2 == 0) 
            sum += i;
    }
    printf("\nSum of even numbers starting from %d to %d are : %d",start,end,sum);
}