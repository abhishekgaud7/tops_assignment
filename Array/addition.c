#include<stdio.h>
int main()
{
	int n,i;
	printf("enter how many values you want to add in array");
	scanf("%d",&n);
	int arr1[n],arr2[n],result[n];
	printf("array1\n");
	//first array 
	for(i=0;i<n;i++)
	{
		printf("enter value for %d index",i);
		scanf("%d",&arr1[i]);
	}
	printf("\narray2\n");
	//second array 
	for(i=0;i<n;i++)
	{
		printf("enter value for %d index",i);
		scanf("%d",&arr2[i]);
	}
	//addition
	for(i=0;i<n;i++)
	{
		result[i]=arr1[i]+arr2[i];
	}
	//result array
	for(i=0;i<n;i++)
	{
		printf("%d\t",result[i]);
	}
	return 0;
}
