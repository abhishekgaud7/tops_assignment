#include<iostream>
using namespace std;
class employee{
	
	int id;
	string name;
	
	public:
		employee(int c_id, string c_name){
			id=c_id;
			name=c_name;
			cout<<id<<"\t"<<name<<endl;
		}
};
main(){
	
	
	employee obj1(101,"abhi");
	employee obj2(102,"Abhishek");
	
	
	
	
}
