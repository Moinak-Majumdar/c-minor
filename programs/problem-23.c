// hl4 wap to add 2 matrix. 
#include<stdio.h>
const int I = 3;
const int J = 3;

void getMatrix(int mat[I][J]) {
    int i,j;
    for (i=0; i<I; i++) {
        for (j = 0; j < J; j++) {
            printf("Enter element for [%d][%d] : ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
}

void displayMatrix(int mat[I][J]) {
    int i,j;
    for (i = 0; i < I; i++){
        for ( j = 0; j < J; j++) {
            printf("%d ", mat[i][j]);   
        }
        printf("\n");
    }
}

void addMatrix(int a[I][J], int b[I][J], int res[I][J]) {
    int i,j;
    for (i = 0; i < I; i++) {
        for(j=0; j<J; j++) {
            res[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int A[I][J], B[I][J], res[I][J];
    printf("\nAdd elements for Matrix A : \n\n");
    getMatrix(A);
    printf("\nAdd elements for Matrix B : \n\n");
    getMatrix(B);
    printf("\nMatrix A is : \n\n");
    displayMatrix(A);
    printf("\nMatrix B is : \n\n");
    displayMatrix(B);
    printf("\nAddition of A + B is : \n\n");
    addMatrix(A,B,res);
    displayMatrix(res);
}