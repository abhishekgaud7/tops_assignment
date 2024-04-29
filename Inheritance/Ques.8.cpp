//Write a program to Mathematic operation like Addition, Subtraction, 
//Multiplication, Division Of two number using different parameters and 
//Function Overloading 
#include<iostream>
using namespace std;
class calculator{
	int n1,n2;
		public:
			void ope()
		{
			cout<<"enter n1 and n2 for addition";
			cin>>n1>>n2;
			cout<<"addition is :"<<n1+n2;
		}
		void ope(double no1,double no2)
		{
			n1=no1;
			n2=no2;
			cout<<"subtrcation is :"<<n1-n2;
		}
		void ope(int no1,int no2)
		{
			n1=no1;
			n2=no2;
			cout<<"multiplication is :"<<n1*n2;
		}
		void ope(int no1)
		{
			
			int no2;
			cout<<"enter no2 for divsion:"<<endl;
			cin>>no2;
			n1=no1;
			n2=no2;
			
			cout<<n1/n2;
		}
};
int main()
{
//	int no1,no2;
	calculator obj;
	obj.ope();
	obj.ope(55.50,10.00);
	obj.ope(45,78);
	obj.ope(45);
	return 0;
}
