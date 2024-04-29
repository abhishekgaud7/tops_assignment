//constructor overloading
#include<iostream>
using namespace std;
class calculator{
	int n1,n2;
	int no2;
	public:
		//without parameter
		calculator()
		{
			cout<<"enter n1 and n2 for addition";
			cin>>n1>>n2;
			cout<<"addition is "<<n1+n2;
		}
		//with parameter
		calculator(double no1,double no2)
		{
			n1=no1;
			n2=no2;
			cout<<"subtrcation is "<<n1-n2;
		}
		//different datatype with parameter
		calculator(int no1,int no2)
		{
			n1=no1;
			n2=no2;
			cout<<"multiplication is "<<n1*n2;
		}
		calculator(int no1)
		{
			
			int no2;
			cout<<"enter no2 for divsion";
			cin>>no2;
			n1=no1;
			n2=no2;
			
			cout<<n1/n2;
		}
};
int main()
{
	int choice;
	cout<<"enter 1 for + 2 for - 3 * 4 /";
	cin>>choice;
	if(choice==1)
	{
		calculator obj;
	}
	else if(choice==2)
	{
		calculator obj(2.5,3.6);
	}
	else if(choice==3)
	{
		calculator obj(2.1,3.1);
	}
	else if(choice==4)
	{
		calculator obj(15);
	}
	else{
		cout<<"invalid";
	}
	return 0;
}
