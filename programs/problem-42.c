// 11. Create a C programme that uses a pointer to count the vowels and consonants in a string.
#include <stdio.h>
#include <stdlib.h>
int main() {
    
    char str1[50];
    char *pt;
    int ctrV, ctrC;
    printf("Input a string: ");
    fgets(str1, sizeof str1, stdin);
    pt = str1;
    ctrV = ctrC = 0;
    while (*pt != '\0') {

        if (*pt == 'A' || *pt == 'E' || *pt == 'I' || *pt == 'O' || *pt == 'U' || *pt == 'a' || *pt == 'e' || *pt == 'i' || *pt == 'o' || *pt == 'u')
            ctrV++;
        else
            ctrC++;
        pt++;
    }
 printf("Number of vowels : %d\nNumber of consonants : %d\n",ctrV,ctrC-1);
 return 0;
}
