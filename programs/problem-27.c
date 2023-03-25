// hl7 Take input as employee id, employee name, salary using structure and display them.
#include<stdio.h>
struct employee {
    char name[25];
    int id, salary;
};
int main () {
    struct employee ptr, *emp;
    emp = &ptr;
    printf("Enter employee's name : ");
    scanf("%s",&emp->name);
    printf("Enter employee's Id : ");
    scanf("%d",&emp->id);
    printf("Enter employee's salary : ");
    scanf("%d",&emp->salary);

    printf("Employee's Details :");
    printf("\nName : %s",emp->name);
    printf("\nId : %d",emp->id);
    printf("\nSalary : %d",emp->salary);
}