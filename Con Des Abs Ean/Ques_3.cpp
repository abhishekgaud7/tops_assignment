#include<iostream>
using namespace std;
class car{
	string model,company;
	int year;
	public:
		void get()
		{
			cout<<"Enter the company name:";
			cin>>company;
			cout<<"Enter the model name:";
			cin>>model;
			cout<<"Enter the year:";
			cin>>year;
		}
		void display()
		{
			cout<<company<<"\t";
			cout<<model<<"\t";
			cout<<year;
		}
};
main(){

	car obj;
	obj.get();
	obj.display();
}

