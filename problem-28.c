// hl2 WAP to use sizeof() operator in structure and union.
#include<stdio.h>
struct empStruct {
    char name[25];
    int id, salary;
};
union empUnion {
    int id, salary;
    char name[25];
};
int main () {
    struct empStruct eStr;
    union empUnion eUni;
    
    printf("Enter employee's name (structure) : ");
    scanf("%s",&eStr.name);
    printf("Enter employee's Id (structure) : ");
    scanf("%d",&eStr.id);
    printf("Enter employee's salary (structure) : ");
    scanf("%d",&eStr.salary);

    printf("Enter employee's name (union) : ");
    scanf("%s",&eUni.name);
    printf("Enter employee's Id (union) : ");
    scanf("%d",&eUni.id);
    printf("Enter employee's salary (union) : ");
    scanf("%d",&eUni.salary);
    // data will be overwrite by salary because union use same shared memory.
    printf("\n\nSize of structure : %d", sizeof(eStr));
    printf("\nSize of union : %d", sizeof(eUni)); 
}