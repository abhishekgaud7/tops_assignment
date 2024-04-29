//class and object
#include<iostream>
using namespace std;
class my_class{
	//variables
	//scope:public protected private(default)
	public:
	string name;
	int id;
	private:
	float salary;
};
int main()
{
	my_class obj;
	obj.id=5;
	cout<<obj.id;
	//private so object can't access it
//	obj.salary=5000;
//	cout<<obj.salary;
	return 0;
}
