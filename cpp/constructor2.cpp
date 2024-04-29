#include<iostream>
using namespace std;
class employee{
	
	int id;
	string name;
	public:
		employee()
		{
			cout<<"Enter id:";
			cin>>id;
			cout<<"Enter name:";
			cin>>name;
			cout<<id<< <<name;
		}
};
main(){
	employee s1;
	employee s2;
}
