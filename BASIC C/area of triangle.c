#include<stdio.h>
void main()
{
	float height,base,area;
	printf("Enter the height:");
	scanf("%f",&height);
	printf("Enter the base:");
	scanf("%f",&base);
	
	area= 0.5*height * base;
	
	printf("Area of triangle %.2f",area);
	
}
