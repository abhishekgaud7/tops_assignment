#include<stdio.h>
main()
{
	char name[100];
	char birthdate[100];
	int age;
	char address[100];
	 printf("Enter the name:");
	 scanf("%c",&name);
	 printf("Enter the birthdate:");
	 scanf("%c",&birthdate);
	 printf("Enter the age:");
	 scanf("%d",&age);
	 printf("Enter the addresse:");
	 scanf("%c",&address);
	 
	printf("\nYour Information:\n");
    printf("Name: %s\n", name);
    printf("Birth Date: %s\n", birthdate);
    printf("Age: %d\n", age);
    printf("Address: %s\n", address);
}
