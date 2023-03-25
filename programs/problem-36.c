// Create a C programme that inspect an integer array and return true if it includes either two 
// even or two odd values all close together.
// Example:
// {1, 2, 3, 4} then o/p = 0
// {1,1,2,2,3} then o/p = 1
// {1,2,2,3,4,4} then o/p = 1

#include<stdio.h>

int main() {
    int arr[50], i,odd_count=0,even_count=0,len;
    printf("Enter no of element : ");
    scanf("%d",&len);
    printf("\nEnter elements : ");
    for(i=0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
   
    for(i=0; i < len; i++) {
        if(odd_count < 2 && even_count < 2) {
            if(arr[i] % 2 == 0) {
                even_count++;
                odd_count=0;
            } else {
                odd_count++;
                even_count=0;
            }
        } else {
            break;
        }
    }

    if(odd_count == 2 || even_count == 2) {
        printf("\no/p = 1");
    } else {
        printf("\no/p = 0");
    }
    
    return 0;

}