#include<stdio.h>
main()
{
	int i,j;
	int n=5;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==1||i==1||i==n|| j==n && i>n/3+1 || i==3 && j>n/3+1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
			}
}
