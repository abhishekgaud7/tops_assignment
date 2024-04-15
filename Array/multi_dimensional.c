#include<stdio.h>
int main()
{
	
	//MD array
	int row,col,i,j;
	printf("enter how many rows u want?");
	scanf("%d",&row);
	printf("enter how many cols you want?");
	scanf("%d",&col);
	int arr[row][col];
	printf("enter %d values",row*col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter value for [%d][%d] index:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

