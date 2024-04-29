//multiple
#include<iostream>
using namespace std;
class A
{
	public:
	void fun1()
	{
		cout<<"function from class A";
		}	
};
class B
{
	public:
	void fun2()
	{
		cout<<"function from class B";
		}	
};
class C : public A,public B
{
	public:
	void fun3()
	{
		cout<<"function from class C";
		}	
};
int main()
{
	C obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
	return 0;
}
