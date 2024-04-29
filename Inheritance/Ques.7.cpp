//multiple
#include<iostream>
using namespace std;
class employee
{
	int id;
	
	public:
		employee()
		{
			cout<<"Enter your id:";
			cin>>id;
			cout<<id<<endl;
		}
		
};
class employee1 :public employee
{
		string name;
		
		public:
			employee1()
			{
				cout<<"enter your name:";
				cin>>name;
				cout<<name<<endl;
				}
};
class employee2 : public employee1
{
	double salary;
		
		public:
			employee2()
			{
				cout<<"Enter your salary:";
				cin>>salary;
				cout<<salary<<endl;
			}
};
main()
{
	employee2 obj;
	
}
