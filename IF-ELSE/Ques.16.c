#include<stdio.h>
main()
{
	int temp;
	printf("Enter Temperature :");
	scanf("%d",&temp);
	
	if(temp<0)
	printf("Freezing weather");
	else if(temp<10)
	printf("Very Cold weather");
	else if(temp<20)
	printf("Cold weather");
	else if(temp<30)
	printf("Normal in Temp");
	else if(temp<40)
	printf("Its Hot Temp");
	
	else 
	printf("Its Very Hot");
	
}
