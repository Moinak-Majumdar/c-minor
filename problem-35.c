// Create a C program that will take a user-supplied series of positive numbers and calculate the length of the largest continuous subsequence from that sequence.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    int nums[100];
    int i, tempp = 0, ctr = 0, max = 0;
    int x;
    printf("Number of integers want to input in the first sequence: ");
    scanf("%d", &N);
    printf("Input the numbers:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &nums[i]);
    }
    while (tempp < (N - 1))
    {
        if (nums[tempp] <= nums[tempp + 1])
        {
            ctr++;
        }
        else
        {
            if (max < ctr)
                max = ctr;
            ctr = 0;
        }
        tempp++;
    }
    if (max < ctr)
    {
        max = ctr;
    }
    printf("Length of longest ascending contiguous subsequence: %d\n", max + 1);
    return 0;
}