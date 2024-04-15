#include<stdio.h>
main()
{
    int i=1,num;
    int ft=0,st=1;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
      {
	int tt = ft + st; //thirdterm=firstterm+secondterm
	printf("\n%d",ft);
	  ft = st;
	  st = tt;
      }
}
