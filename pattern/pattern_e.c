#include<stdio.h>
main()
{
	int i,j;
	int n=5;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==1||i==1||i==3||i==n){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
			}
}
