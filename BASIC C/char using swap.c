#include<stdio.h>
#include<string.h>
void main()
{
    char a,b,temp;
	printf("Enter the alphabet:");
	scanf("%c %c",&a,&b);
	printf("Before swaping is a= %c and b= %c",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swaping is a= %c and b= %c",a,b);
		
}
