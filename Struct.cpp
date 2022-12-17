// Write a program to create a struct Employee. Create employee id, employee name and employee salary. takle input from the user and display them. 

#include<stdio.h>
struct Emp
{
	int empid=0;
	char empname[20];
	float empsalary=0.0;
};
int main()
{
	struct Emp empdata[50];
	int i,n;
	printf("Enter the number of employees YOU WANT TO ADD \n ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("Enter the Employee id \n");
		scanf("%d", &empdata[i].empid);
		printf("Enter the Employee name \n");
		scanf("%s", &empdata[i].empname);
		printf("Enter the Employee Salary \n");
		scanf("%f", &empdata[i].empsalary);
	}
	printf(" Employee Details \n");
	for(i=0;i<n;i++)
	{
		printf("Employee: %d \n", (i+1));
		printf("Employee Id: %d \n", empdata[i].empid);
			printf("Employee Name: %s \n", empdata[i].empname);
				printf("Employee Salary: %.2f \n", empdata[i].empsalary);
				printf("\n");
	}
	return 0;
}

