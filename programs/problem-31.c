// Convert a given number (in seconds) to hours, minutes, and seconds using a C 
// programme.
// Example:
// Input seconds:300
// Expected Output:H:M:S - 0:5:00

#include<stdio.h>
int main() {
    int s,hh=0,mm=0,ss=0;

    printf("Enter time(s) : ");
    scanf("%d", &s);

    hh = s / 3600;
    mm = (s - (3600*hh))/60;
    ss = (s - (3600*hh)-(mm*60));

    printf("\nH:M:S - %d:%d:%d",hh,mm,ss);
    return 0;
}