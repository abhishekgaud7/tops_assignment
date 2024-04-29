#include<iostream>
using namespace std;
class employee{
	//data member
	int ID;
	string name;
	float salary;
	
	//member function/method
	public:
	void get_data()
	{
		cout<<"enter ID";
		cin>>ID;
		cout<<"enter name";
		cin>>name;
		cout<<"enter salary";
		cin>>salary;
	}
	void display_data()
	{
		cout<<"ID is "<<ID<<" name is "<<name<<" salary is "<<salary;
	}
};
int main()
{

//	employee e1,e2;
//	e1.get_data();
//	e1.display_data();
//	e2.get_data();
//	e2.display_data();
//	
//	e1.get_data();


	int i;
	employee obj[100];
	for(i=0;i<2;i++)
	{
		cout<<"details for employee "<<i+1<<endl;
		obj[i].get_data();
		obj[i].display_data();
		cout<<endl;
	}
	return 0;
}
