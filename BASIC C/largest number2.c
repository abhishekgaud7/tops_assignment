//find largest and smallest among three number.
#include<stdio.h>
main()
{
	int  a,b,c;
	printf("Enter the frist number:");
	scanf("%d",&a);
	printf("Enter the Second number:");
	scanf("%d",&b);
	printf("Enter the Second number:");
	scanf("%d",&c);
	
		if(a>b && a>c){
	
        printf("a is Largest"); 
		}
    else if(b>a && b>c){
	
		printf("b is Largest");
    }else{
    	
    	printf("c is Largest");
    		}

}
