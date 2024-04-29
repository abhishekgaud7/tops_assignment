
#include<iostream>
using namespace std;
class calc{
	int n1,n2,choice;
	public:
		calc()
		{
			cout<<"enter n1 andd n2";
			cin>>n1>>n2;
			cout<<"enter 1 for+ 2 for - 3 * 4 /";
			cin>>choice;
			
			switch(choice)
			{
				case 1:
					cout<<n1+n2;
					break;
				default:
					cout<<"invalid";	
			}
		}
};
int main()
{
	calc obj;
	return 0;
}
