// hl7 wap to implement stack using array.  
#include<stdio.h>
#include<stdlib.h>
int stack[25],top=-1;

void push() {
    int val;
    if(top > 26) {
        printf("\nStack Overflow");
        exit(0);
    } else {
        printf("Enter value to push : ");
        scanf("%d",&val);
        stack[++top] = val;
    }
}
void pop() {
    if(top == -1) {
        printf("\nStack Underflow");
        exit(0);
    }
    printf("\nPoped element : %d", stack[top--]);
}
void display() {
    int i;
    printf("\nStack elements are : ");
    for ( i = 0; i <= top; i++){
        printf("%d ",stack[i]);
    }
}

int main() {
    int ch;

    while(1) {
        printf("\n1.Push, 2.Pop, 3.Display, 4.Exit");
        printf("\nYour choice : ");
        scanf("%d",&ch);

        switch (ch){
            case 1 :
                push();
                break;
            case 2 :
                pop();
                break;
            case 3 : 
                display();
                break;
            case 4: 
                exit(0);
                break;          
            default:
                printf("\n Wrong Choice");
                break;
        }
    }
}