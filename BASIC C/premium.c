#include<stdio.h>
main()
{
	float salary,premium_percentage,insurance_premium;
	printf("Enter the salary:");
	scanf("%f",&salary);
	printf("Enter the premium_percentage:");
	scanf("%f",&premium_percentage);
	
	
	insurance_premium=salary*(premium_percentage)/100;
	
	printf("Find out the premium %.2f",insurance_premium);
	
	
}
