// Write a program to create a struct Employee. Create employee id, employee name and employee salary. takle input from the user and display them uisng pointer. 

#include<stdio.h>
struct Emp
{
	int empid;
	char empname[20];
	float empsalary;
};
int main()
{
	struct Emp *empdata, empinfo;
	empdata = empinfo;
	int i;
		printf("Enter the Employee id \n");
		scanf("%d", &empdata->empid);
		printf("Enter the Employee name \n");
		scanf("%s", &empdata->empname);
		printf("Enter the Employee Salary \n");
		scanf("%f", &empdata->empsalary);

	printf(" Employee Details \n");

		printf("Employee Id: %d \n", empdata->empid);
			printf("Employee Name: %s \n", empdata->empname);
				printf("Employee Salary: %.2f \n", empdata->empsalary);
				printf("\n");

	return 0;
}

