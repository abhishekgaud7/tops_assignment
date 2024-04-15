#include<stdio.h>
void main()
{
	float radius, area, pie=3.14;
	printf("Enter the radius:");
	scanf("%f",&radius);
	
	area= 2 * pie * radius * radius;
	
	printf("Circumference of circle %.2f",area);
	
}
