// Make a C programme that accepts the user's input of 4 positive integers (p, q, r, and s) and an 
// even number (p). Print "Correct values" if q is more than r, s is greater than p, and the total of r, s, 
// and p is greater than the sum of p and q; else, print "Wrong values."
// Example:
// Input the second integer: 35
// Input the third integer: 15
// Input the fourth integer: 46
// Expected Output: Wrong values

#include<stdio.h>
#include<stdlib.h>

int main () {
    int p,q,r,s;

    printf("\np : ");
    scanf("%d", &p);
    printf("\nq : ");
    scanf("%d", &q);
    printf("\nr : ");
    scanf("%d", &r);
    printf("\ns : ");
    scanf("%d", &s);

    if((p>0) && (q>0) && (r>0) && (s>0) && (p%2 == 0) && (q>r) && (s>p) &&(r+s+p > p+q)) {
        printf("\nCorrect values");
    } else {
        printf("\nWrong values");
    }
}