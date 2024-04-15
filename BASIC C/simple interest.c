#include<stdio.h>
void main()
{
	float principle, rate, time, si;
	printf("Enter the principle:");
	scanf("%f",&principle);
	printf("Enter the rate:");
	scanf("%f",&rate);
	printf("Enter the time:");
	scanf("%f",&time);
	
	si = principle * rate * time /100;
	
	printf("simple interest is : %.2f",si);
	
}
