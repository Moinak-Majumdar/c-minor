//  Create a C programme that takes two sequences of numbers as input: ((a1, a2,.. an), (b1, 
// b2,.. bn)). Find each integer, one by one, in ascending order that appears in both sequences.
// Constraints: 
// 1≤N1≤100, N1 -> number of integers in first sequence. 
// 1≤N2≤100, N2 -> number of integers in second sequence. 
// 1 ≤ ai≤ 100 ( 1 ≤ i ≤ N1 ) 
// 1 ≤ bj≤ 100 ( 1 ≤ j ≤ N2 ) 
// Example: 
// ( 1 2 3 1 2 3 4) -> 1 2 3 ( 1 2 3 1 2 3) -> 1 2 3 (1 2 3 4 5 6) ->

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N1,N2,n[100];
    int i,x;
    printf("Number of integers want to input in the first sequence: ");
    scanf("%d",&N1);
    printf("Input the numbers:\n");
    for(i=0;i<N1;i++){
        scanf("%d",&x);
        n[x] = 1;
    }
    printf("Number of integers want to input in the second sequence: ");
    scanf("%d",&N2);
    printf("Input the numbers:\n");
    for(i=0;i<N2;i++){
        scanf("%d",&x);
        n[x] |= 2;
    }
    printf("\nCommon elements of the said sequences:\n");
    for(i=0;i<=100;i++){
        if(n[i]==3){
            printf("%d\n",i);
        }
    }
    return 0;
}