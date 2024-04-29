#include<iostream>
using namespace std;
void add(int  x,int y);
int sub(int a,int b);
int main()
{
	add(5,5);
	cout<<endl;
	int c=sub(10,8);
	cout<<c;
	return 0;
}
void add(int x,int y)
{
	cout<<x+y;
}
int sub(int a,int b)
{
	return a-b;
}
