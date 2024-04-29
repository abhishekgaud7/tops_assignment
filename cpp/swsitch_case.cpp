#include<iostream>
using namespace std;
int main()
{
	int choice;
	cout<<"1 for monday 2 for tuesday 3 for wednesday";
	cout<<"\n enter your choice";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"monday";
			break;
		case 2:
			cout<<"tuesday";
			break;
		case 3:
			cout<<"wednesday";
			break;	
		default:
			cout<<"invalid choice";		
	}
	return 0;
}
