#include<stdio.h>
main(){
	int i,reverse =0,remainder=0;
	
	printf("Enter the number:");
	scanf("%d",&i);
	
	while(i!=0){
		remainder=i%10;
		reverse =reverse *10 + remainder;
		i=i/10;
		
	}
	printf("Reversed number = %d",reverse);
}
