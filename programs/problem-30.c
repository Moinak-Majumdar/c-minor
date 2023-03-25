// hl7 wap to implement string copy, sting concat, string length and string compare using string method.
#include<stdio.h>
#include<string.h>
#define size 25

int main () {
    char str1[size] = "Hello", str2[size];

    strcpy(str2, str1);
    printf("\nString2 after copy : %s",str2);

    strcat(str2, " World !");
    printf("\nString2 after concat : %s",str2);

    printf("\nString 2 length : %d", (int)strlen(str2));

    if(strcmp(str1, str2) == 0) {
        printf("\nStr1 and Str2 are equal.");
    } else {
        printf("\nStr1 and Str2 are not equal.");
    }
}