// 12. Create a C programme that uses a pointer to print a string backwards.
#include <stdio.h>
#include <stdlib.h>
int main() {
    
    char str1[50];
    char revstr[50];
    char *stptr = str1;
    char *rvptr = revstr;
    int i = -1;
    printf("Input a string : ");
    scanf("%s", str1);
    while (*stptr) {
        stptr++;
        i++;
    }
    while (i >= 0) {
        stptr--;
        *rvptr = *stptr;
        rvptr++;
        --i;
    }
    *rvptr = '\0';
    printf("Reverse of the string is : %s\n\n", revstr);
    return 0;
}
