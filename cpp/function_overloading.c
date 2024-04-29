#include<iostream>
using namespace std;
//polymorphism :many forms

			//  1)compile-time 
					//i)function overloading
					//ii)operator overloading
//				2)run-time
					//i)function overriding
//function overloading
class calculator{
	int no1,no2;
	int ans;
	public:
		void ope()
		{
			cout<<"enter number1 and 2 for addition";
			cin>>no1>>no2;
			cout<<no1+no2;
		}
		void ope()
		{
			cout<<"enter number1 and 2 for addition";
			cin>>no1>>no2;
			cout<<no1+no2;
		}
};
int main()
{
	calculator obj;
	obj.ope();
	return 0;
}
