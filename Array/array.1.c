#include<stdio.h>
main()
{
	int roll_no[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("\n Enter your roll no");
		scanf("%d",&roll_no[i]);
	}
	for(i=0;i<3;i++){
		printf("%d\t",roll_no[i]);
	}
}
