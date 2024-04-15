#include<stdio.h>
void main()
{
//	int n1,n2,ans;
	float n1,n2,ans;
//	printf("Enter first number:");
//	scanf("%d",&n1);
//	printf("Enter Second number:");
//	scanf("%d",&n2);
	printf("Enter first number:");
	scanf("%f",&n1);
	printf("Enter Second number:");
	scanf("%f",&n2);
//	ans=n1+n2;
//	ans=n1-n2;
//	ans=n1*n2;
	ans=n1/n2;
//	printf("Addition of %d and %d is %d",n1,n2,ans);
//	printf("Subtraction of %d and %d is %d",n1,n2,ans);
//	printf("multiplication of %d and %d is %d",n1,n2,ans);
	printf("Division of %.2f and %.2f is %.2f",n1,n2,ans);
	
	}
