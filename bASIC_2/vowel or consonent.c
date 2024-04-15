//take character from user and find it is vowel(a,e,i,o,u)or consonent.
#include<stdio.h>
main()
{
	char z;
	printf("Enter the alphabet:");
	scanf("%c",&z);
	
	if(z=='a' || z=='e' || z=='i' || z=='o' || z=='u' || z=='A' || z=='E' || z=='I' || z=='O' || z=='U'){
		printf("This alphabet is vowel");
	}else{
		printf("This alphabet is consonent");
	}
	
}
