// Write a C++ Program display Student Mark sheet using Multiple inheritance 
#include<iostream>
using namespace std;
class Student{
	string name;
	int roll_no;
		public:
			void get1()
			{
				cout<<"Enter your name:";
				cin>>name;
				cout<<"Enter your roll_no:";
				cin>>roll_no;
			}
			void display1()
			{
				cout<<"Your name is "<<name<<"\t"<<"your roll_no"<<roll_no<<endl;
			}
};
class marks
{
	int marksobtained;
		public:
			void get2()
			{
				cout<<"Enter your marksobtained:";
				cin>>marksobtained;
			}
			
			void display2()
			{
				cout<<"Your marksobtained is "<<marksobtained<<endl;
			}
};
class teacher : public Student, public marks
{
	int marksobtained;
	double salary;
			public:
				void get3()
				{
					if(marksobtained<=90)
					{
						cout<<"Your performance is Excellent:"<<endl;
					}
					else if(marksobtained<=80)
					{
						cout<<"Your performance is Good:"<<endl;
					}
					else if (marksobtained<=50)
					{
						cout<<"Your performance is Average:"<<endl;
					}
					else{
						cout<<"Your performance is very bad!!....now improve your marks:"<<endl;
					}
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
	
}
