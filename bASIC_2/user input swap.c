#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the Second number:");
	scanf("%d",&b);
	printf("Before swaping is a= %d and b= %d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swaping is a= %d and b= %d",a,b);
	
}
