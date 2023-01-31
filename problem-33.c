// Create a C programme that accepts two numbers and a string (n1, n2). The characters in 
// the string between n1 and n2 should now be reversed.
// Example:
// ("abcdxyabcd", 5, 6) -> "abcdyxabcd"
// ("Exercises", 1, 3) -> "exercises"

#include<stdio.h>
#include<string.h>

int main () {
    int n1, n2, i=0, j , len;
    char s[20], r[20], temp;

    printf("Enter string : ");
    scanf("%s", &s);
    printf("\nEnter starting and ending position to reverse sub-string : ");
    scanf("%d %d",&n1,&n2);
    
    len = strlen(s);
    
    for(; i<n1-1; i++) {
        r[i] = s[i];
    }
    for(j = n2-1; i < n2; i++,j--) {
        r[i] = s[j];
    }
    for(; i <= len; i++) {
        r[i] = s[i];
    }

    printf("\nAfter reverse : %s", r);
    return 0 ;
}