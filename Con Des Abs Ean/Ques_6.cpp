//Write a C++ program to implement a class called Employee that has 
//private member variables for name, employee ID, and salary. Include 
//member functions to calculate and set salary based on employee 
//performance. Using of constructor
#include<iostream>
using namespace std;
class Employee{
	string name;
	int id;
	float salary;
		public:
			Employee()
			{
				cout<<"Enter the employee name:";
				cin>>name;
				cout<<"Enter the employee id:";
				cin>>id;
				cout<<"Enter the employee salary:";
				cin>>salary;
			}
			void performance()
			{
				if(salary<100000){
					cout<<"Employee performance is bad";
				}
				else if(salary<200000){
					cout<<"Employee performance is average";
				}
				else if(salary<300000){
					cout<<"Employee performance is good";
				}
				else if(salary<500000){
					cout<<"Employee performance is excellence";
				}
				else{
					cout<<"Employee performance is pata nahi";
				}
			}
	
};
main(){
	Employee obj;
	obj.performance();
}
