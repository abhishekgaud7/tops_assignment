//Check Number Is Positive or Negative
#include<stdio.h>
main()
{
	int num;
	printf("Enter number :");
	scanf("%d",&num);
	if(num>0)
	
		printf("%d is Positive",num);
		
	else if(num==0)
		printf("\n%d is Zero",num);
		
		else
		printf("%d is Negative",num);
		
}
