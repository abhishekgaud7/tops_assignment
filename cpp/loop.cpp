//loop is used to perform task again and again
//1)entry control( for, while)
//2)exit control (do-while)
#include<iostream>
using namespace std;
int main()
{
	int i=100;
//	for(i=1;i<=10;i++)
//	{
//		cout<<i<<") helloo\n";
//	}
//	while(i<=10)
//	{
//		cout<<i<<") hello\n";
//		i++;
//	}
	do{
		cout<<i<<endl;
		i--;
	}while(i>=1);
	
	return 0;
}
