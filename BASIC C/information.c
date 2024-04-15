#include<stdio.h>
main(){
	int name,birth_date, age;
	char address;
	printf("Enter the name:");
	scanf("%d",&name);
	printf("Enter the birth_date:");
	scanf("%d",&birth_date);
	printf("\nEnter the age:");
	scanf("%d",&age);
	printf("\nEnter the address:");
	scanf("%c",&address);

	printf("\n name = %d",name);
	printf("\n birth_date = %d",birth_date);
	printf("\n age = %d",age);
	printf("\n address = %c",address);
}

