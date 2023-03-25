// hl6 wap to find fibonacci number of a given range.
#include <stdio.h>
int main() {
    int start, end, i, n1 = 0, n2 = 1, next;

    printf("\nEnter the start of the range: ");
    scanf("%d", &start);
    printf("\nEnter the end of the range: ");
    scanf("%d", &end);

    printf("Fibonacci numbers in the range : ");
    for (i = 0; i <= end; i++) {
        if (i >= start) {
            printf("%d ", n1);
        }

        next = n1 + n2;
        n1 = n2;
        n2 = next;
    }
    return 0;
}