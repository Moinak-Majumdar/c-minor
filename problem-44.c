// 13. Make a C programme that utilises an array-returning function to get the highest and
// lowest value in a set of integers.

#include <stdio.h>
#include <stdlib.h>

int *maxmin(int arra1[], int v) {
    int i;
    static int result_mm[2];
    result_mm[0] = arra1[0];
    result_mm[1] = arra1[0];
    for (i = 1; i < v; i++) {
        if (result_mm[0] > arra1[i])
            result_mm[0] = arra1[i];
        if (result_mm[1] < arra1[i])
            result_mm[1] = arra1[i];
    }
    return result_mm;
}
int main() {
    int arr[10];
    int n, i, *p;
    printf("Number of values you want to input(max 10): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Input value at [%d] : ", i);
        scanf("%d", &arr[i]);
    }
    p = maxmin(arr, n);
    printf("Minimum value is: %d\n", *p++);
    printf("Maximum value is: %d\n", *p);
    return 0;
}