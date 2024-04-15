#include<stdio.h>
main()
{
	int num,rem=0,rev=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	int number=num;
	
			while(num!=0)
		{
					rem=num%10;
					rev=rev*10+rem;
					num=num/10;
	}
   			if(number==rev){
						printf("%d is a palindrome",number);
			}else{
						printf("%d is not a palindrome",number);
   				 }
}
