#include<stdio.h>
main()
{
	
	int days,months,years;
	
	printf("Enter the years:");
	scanf("%d",&years);

	 days = years * 365;
    months = years * 12;
	
	printf("Number of days = %d",days);
	printf("\nNumber of months = %d",months);
	
	
	
	}
