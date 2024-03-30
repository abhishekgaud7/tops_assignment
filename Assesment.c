#include<stdio.h>
main()
{
	int i,j;
	int array[2][2],array1[2][2];
	int array2[2][2];
	printf("-------------------matrix-1:-----------------------------\n");
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the element:",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",array[i][j]);

		}
		printf("\n");
	}
	
		printf("-------------------matrix-2:-----------------------------\n");
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter the element:",i,j);
			scanf("%d",&array1[i][j]);
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d\t",array1[i][j]);

		}
		printf("\n");
	}
		printf("\n------Result : multiplication matrix:------\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			array2[i][j]=array[i][j]*array1[j][i];
			printf(" %d ",array2[i][j]);
		}
		printf("\n");	
	}

}

