#include<stdio.h>
main()
{
	float monthlySalary;
	int monthlyWorked;
	float annualSalary;
	
	printf("Enter the monthly Salary:");
	scanf("%f",&monthlySalary);
	
	printf("Enter the monthly worked:");
	scanf("%d",&monthlyWorked);
	
	annualSalary =monthlySalary * monthlyWorked;
	
	printf("Annual Salary : $%.2f\n",annualSalary);
	
	}
	
