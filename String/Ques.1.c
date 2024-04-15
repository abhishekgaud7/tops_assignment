#include<stdio.h>
void main()
{
	int i,length=0;
	char str[100];
	printf("Enter your String :\n");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		length++;
		
	}
	printf("Lenght of your String is %d",length);
	
}
