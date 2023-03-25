// 16. C program to calculate total elapsed time by program/function i.e., the time taken to
// process the set of statements, complete function or complete program in C programming
// language

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    clock_t start, end;
    start = clock();
    printf("Enter any character : ");
    getchar();
    end = clock();
    double duration = ((double)end - start) / CLOCKS_PER_SEC;
    printf("Time taken to execute in seconds : %f", duration);
    return 0;
}
