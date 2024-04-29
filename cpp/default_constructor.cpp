#include<iostream>
using namespace std;

//Constructor is function which automatically call at the 
//time of object creation
//constructor name is same as class name
//constructor doesn't have return type
class employee{
	int ID;
	string name;
	float salary;
	public:
		void get(int id1,string name1,float salary1)
		{
			ID=id1;
			name=name1;
			salary=salary1;
		}
		void display()
		{
			cout<<ID<<"\t"<<name<<"\t"<<salary<<endl;
		}
		//default constructor
		employee()
		{
			
			
		}
};
main(){
	int id;
	cout<<"Enter id";
	cin>>id;
	employee obj;
	obj.get(id,"Abhi",1200);
	obj.display();
	
	employee obj2;
	
	obj2.get(102,"Abhishek",100);
	
	obj2.display();
	
	
	}
