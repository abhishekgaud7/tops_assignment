//hybrid
#include<iostream>
using namespace std;
class A{
	public:
		void fun1()
		{
			cout<<"function from class A\n";
		}
};
class B:public A{
	public:
		void fun2()
		{
			cout<<"function from class B\n";
		}
};
class C{
	public:
		void fun3()
		{
			cout<<"function from class C\n";
		}
};
class D:public C,public B{
	public:
		void fun4()
		{
			cout<<"function from class D\n";
		}
};
int main()
{
	D obj;
	obj.fun1();
	obj.fun2();
	obj.fun3();
	obj.fun4();
	return 0;
}
