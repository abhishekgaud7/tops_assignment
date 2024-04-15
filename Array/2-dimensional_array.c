//2D array
#include<stdio.h>
int main()
{
	int i,j;
	int array[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter value for array[%d][%d] index:",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
//			printf("array[%d][%d] index : value %d\n",i,j,array[i][j]);
		printf("%d\t",array[i][j]);

		}
		printf("\n");
	}
   
	
	return 0;
}
