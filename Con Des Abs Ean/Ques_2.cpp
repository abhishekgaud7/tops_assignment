#include<iostream>
using namespace std;
class calculator{
	int n1,n2,choice;
	public:
		calculator(){
			cout<<"Entee the first number:";
			cin>>n1;
			cout<<"Enter the second number:";
			cin>>n2;
			cout<<"Enter 1 for + 2 for - 3 for * 4 for /:";
			cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<n1+n2;
				break;
			case 2:
				cout<<n1-n2;
				break;
			case 3:
				cout<<n1*n2;
				break;
			case 4:
				cout<<n1/n2;
				break;
			default:
				cout<<"Invalid";
		}
	}
};
int main(){
	calculator obj;
	return 0;
}
