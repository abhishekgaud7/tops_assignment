//3. Create a class person having members name and age. Derive a class student 
//having member percentage. Derive another class teacher having member 
//salary. Write necessary member function to initialize, read and write data. 
//Write also Main function (Multiple Inheritance)

#include<iostream>
using namespace std;
class person{
	string name;
	int age;
		public:
			void get1()
			{
				cout<<"Enter your name:";
				cin>>name;
				cout<<"Enter your age:";
				cin>>age;
			}
			void display1()
			{
				cout<<"Your name is:"<<name<<"\t"<<"your age:"<<age<<endl;
			}
};
class student
{
	float percentage;
		public:
			void get2()
			{
				cout<<"Enter your percentage:";
				cin>>percentage;
			}
			
			void display2()
			{
				cout<<"Your percentage is:"<<percentage<<endl;
			}
};
class teacher : public person , public student
{
	
	double salary;
			public:
				void get3()
				{
					cout<<"Enter your salary:";
					cin>>salary;
				}
				void display3()
				{
					cout<<"Your salary is:"<<salary<<endl;
				}
};
main()
{
	
	teacher obj;
	obj.get1();
	obj.get2();
	obj.get3();
	obj.display1();
	obj.display2();
	obj.display3();
	
	
}
