// 15. Use arrays write a C programme to return a number of values or multiple values from a
// function.

#include <stdio.h>
#include <stdlib.h>
int *getNEvenNumbers(int N, int *array) {
    
    int i;
    for (i = 0; i < N; i++){
        array[i] = 2 * (i + 1);
    }
    return array;
}
int main() {
    int i, N, array[100];
    printf("Enter one integers : ");
    scanf("%d", &N);
    getNEvenNumbers(N, array);
    printf("\n%d Even Numbers are : ", N);
    for (i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}