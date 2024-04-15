//area of rectangular prism
#include<stdio.h>
main()
{
	float a,length,width,height;
	printf("Enter the length:");
	scanf("%f",&length);
	printf("Enter the width:");
	scanf("%f",&width);
	printf("Enter the height:");
	scanf("%f",&height);
	
	a=2*((width*length)+(height*length)+(height*width));
	
	printf("\narea of rectangular prism is %.2f",a);
	
	
	}
