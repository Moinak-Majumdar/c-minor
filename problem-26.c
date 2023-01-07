// hl4 wap to reverse an array.
#include<stdio.h>
const int max = 100;
void display(int arr[max], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }
}
int main() {
    int count,i,temp,list[max];

    printf("\nEnter number of elements to input : ");
    scanf("%d",&count);

    for (i = 0; i < count; i++){
        printf("Enter element at pos[%d] : ",i+1);
        scanf("%d",&list[i]);
    }
    printf("\nArray elements before reverse :");
    display(list, count);

    for ( i = 0; i < count/2; i++){
        temp = list[i];
        list[i] = list[count - i - 1];
        list[count - i - 1] = temp;
    }

    printf("\nArray elements after reverse :");
    display(list, count);
}