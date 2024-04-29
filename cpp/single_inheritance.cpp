//inheritance is used to link 2 or more classes together
#include<iostream>
using namespace std;
class A{
	public:
		void A1()
		{
			cout<<"A function from class A";
		}
		void display()
		{
			cout<<"display from class A";
		}
};
class B:protected A{
	public:
		void B1()
		{
			display();
			cout<<"B function from class B";
		}
		
};
int main()
{
	B obj;
	obj.B1();
	obj.display();//it will generate error because B inheritaed A as protected
	//protected means class can use it but obj can't
	return 0;
}
