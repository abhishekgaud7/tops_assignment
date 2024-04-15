#include<stdio.h>
main()
{
	int i,number,factorial=1;
	
	i=1;
	printf("Enter the number:");
	scanf("%d",&number);
	while(i<=number)
	{
		factorial=factorial * i;
		i++;
		
	}
	printf("\nThe factorail of %d is : %d",number,factorial);

	
}
