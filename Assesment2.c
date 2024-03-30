#include<stdio.h>
main()
{
	int i,j,num,k;
	printf("Enter the size of matrix:");
	scanf("%d",&num);
	int arr1[num][num],arr2[num][num];
	int result[num][num];
	printf("-------------------matrix-1:-----------------------------\n");
	printf("\n");
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			printf("enter the element:",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	

	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
		printf("%d\t",arr1[i][j]);

		} 
		printf("\n");
	}
	
		printf("-------------------matrix-2:-----------------------------\n");
						printf("\n");
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			printf("enter the element:",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
		for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
		printf("%d\t",arr2[i][j]);

		}
		printf("\n");
	}
		printf("\n------Result : multiplication matrix:------\n");
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			result[i][j]=0;
			for(k=0;k<num;k++){
			result[i][j]=arr1[i][j]*arr2[j][i];
		
			}
		}
	}
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
				printf(" %d ",result[i][j]);
		}
		printf("\n");
	}
}

