#include <stdio.h>

int main()
{
    float sal, hra = 0, da = 0, total = 0;

    printf("\nEnter basic salary : ");
    scanf("%f", &sal);

    if (sal <= 10000){
        hra = sal * 20 / 100;
        da = sal * 80 / 100;
    } else if (sal > 10000 && sal <= 20000) {
        hra = sal * 25 / 100;
        da = sal * 90 / 100;
    } else {
        hra = sal * 30 / 100;
        da = sal * 95 / 100;
    }
    total = sal + hra + da;
    printf("\nSalary of the employee is : ");
    printf("\nBasic : %.2f",sal);
    printf("\nHRA : %.2f",hra);
    printf("\nDa : %.2f",da);
    printf("\nGross : %.2f",total);

}