//inline function:
#include<iostream>
using namespace std;
inline int mul(int m,int n)
{
	return m*n;
}
inline int cube(int n)
{
	return n*n*n;
}
int main()
{
	cout<<mul(3,5);
	cout<<endl;
	cout<<cube(10);
	return 0;
}
