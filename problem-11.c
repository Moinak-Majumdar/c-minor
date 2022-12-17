// hl5 print first n natural numbers.
#include <stdio.h>
int main () {
    int i = 1, n;
    printf("\nEnter upper limit : ");
    scanf("%d",&n);
    printf("\nFirst %d natural numbers are :\n\n",n);
    while (i<=n) {
        printf("%d  ",i);
        i++;
    }
}