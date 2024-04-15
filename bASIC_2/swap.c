#include<stdio.h>
void main(){
	int num1=20,num2=10;
	printf("before swap number 1 id %d number 2 is %d",num1,num2);
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	printf("\nAfter swap number 1 id %d number 2 is %d",num1,num2);
	}
