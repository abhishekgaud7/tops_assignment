//. WAP to print factorial of given number 
#include<stdio.h>
main()
{
	int i,number,factorial=1;
	
	printf("Enter the number:");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		factorial=factorial+i;
		printf("\n%d",factorial);
	}

	
}
