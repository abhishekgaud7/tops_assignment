//scope resolution ope
#include<iostream>
using namespace std;
class employee
{
	int n1,n2;
	public:
		void get();//decalare
	
};
//define
void employee::get()
{
	cout<<"get function of class but define outside of class";
}

int main()
{
	employee obj;
	obj.get();
	
	return 0;
}
