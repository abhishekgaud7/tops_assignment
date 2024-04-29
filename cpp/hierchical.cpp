//heirchical
#include<iostream>
using namespace std;
class A{
	public:
		void info1()
		{
			cout<<"function from class A\n";
		}
};
class B:public A{
	public:
		void info2()
		{
			cout<<"function from class B\n";
		}
};
class C:public A{
	public:
		void info3()
		{
			cout<<"function from class C\n";
		}
};
int main()
{
	B obj1;
	cout<<"object of class B\n";
	obj1.info1();
	obj1.info2();
	C obj2;
	cout<<"object of class C\n";
	obj2.info3();
	obj2.info1();
	
}
