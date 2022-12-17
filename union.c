#include<stdio.h>
struct structureEmp{
	int empid;
	char empname[5];
	float empsalary;
	}
	semp;

union unionEmp{
	int empid;
	char empname[5];
	float empsalary;
	}
	uemp;
int main(){

printf("Size of sturcture: %d \n", sizeof(semp));
printf("Size of union: %d", sizeof(uemp));
return 0;
} 

