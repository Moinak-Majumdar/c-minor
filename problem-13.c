// hl6 wap to add first n number using while loop.
#include<stdio.h>

int main () {
    int n,sum=0,i=1;
    printf("\nEnter upper limit : ");
    scanf("%d",&n);
    while (i<=n) {
        sum = sum + i;
        i++;
    }
    printf("\nSum : %d",sum);
}