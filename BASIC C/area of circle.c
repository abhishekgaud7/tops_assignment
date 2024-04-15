#include<stdio.h>
void main()
{
	float radius, area, pie=3.14;
	printf("Enter the radius:");
	scanf("%f",&radius);
	
	area= pie * radius * radius;
	
	printf("Area of circle %.2f",area);
	
}
