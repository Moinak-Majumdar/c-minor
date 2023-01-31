// 14. Create a C programme that read a user-provided string that serves as their password
// without displaying it on screen.
// Here is a list of the duties involved in reading a password string:
// • We should read characters aloud rather than projecting them into a screen. We must
// instead use the '*' character.
// • Before the user hits the enter key, we should read the input.
// • When a user touches the Backspace key, the following steps should be taken:
// • Eliminate his most recent character from the input string.
// • Move the cursor back 1 character, then remove the final star character from the screen.

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char password[128], c;
    int index = 0;
    printf("Enter Password : ");
    while ((c = getch()) != 13)
    {
        if (index < 0)
        {
            index = 0;
        }
        if (c == 8)
        {
            putch('\b');
            putch(NULL);
            putch('\b');
            index--;
            continue;
        }
        password[index++] = c;
        putch('*');
    }
    password[index] = '\0';
    printf("\nPassword String = %s", password);
    return 0;
}