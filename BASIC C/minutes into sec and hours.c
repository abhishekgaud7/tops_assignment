//29.Convert minutes into seconds and hours 
#include<stdio.h>
main()
{
	
	int minutes,seconds,hours;
	
	printf("Enter the minutes:");
	scanf("%d",&minutes);

	seconds = minutes * 60;
    hours = minutes / 60;
	
	printf("Number of seconds = %d",seconds);
	printf("\nNumber of hours = %d",hours);
	
	
	
	}
