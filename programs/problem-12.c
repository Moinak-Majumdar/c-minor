// hl5 print first n odd numbers.
#include <stdio.h>
int main () {
    int i , u, l;
    printf("\nEnter lower limit : ");
    scanf("%d",&l);
    printf("\nEnter upper limit : ");
    scanf("%d",&u);
    printf("\nOdd numbers between %d and %d are :\n\n",l,u);
    for(i=l; i <= u; i++) {
       if(i % 2 != 0) {
            printf("%d  ",i);
       }
    }
}