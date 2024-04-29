//this pointer which points to class instances..
#include<iostream>
using namespace std;
class employee{
	int n1,n2;
	public:
		void get(int n1,int n2)//local variables
		{
			this->n1=n1;
			this->n2=n2;
		} 
		void display()
		{
			cout<<n1<<" "<<n2;
		}
};
int main()
{
	employee obj;
	obj.get(15,20);
	obj.display();
	
	return 0;
}
