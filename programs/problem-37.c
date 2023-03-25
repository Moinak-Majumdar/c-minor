// 7. Write a C Program to display the pattern like pyramid using the alphabet. 
// A B C D C B A 
//   A B C B A 
//     A B A 
//       A

#include<stdio.h>

int main () {
    int x,y,elm,j,no;

    printf("Enter no of rows : ");
    scanf("%d", &no);

    for(x=0,elm=64+no; x<=no,elm>64; x++,elm--) {
        for(y=0;y<x;y++) {
            printf("  ");
        }
        for(j=65; j<elm; j++)
            printf("%c ",j);
        for(j=elm; j>=65; j--)
            printf("%c ",j);
        printf("\n");
    }   
}