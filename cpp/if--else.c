//operators
//1)arithmetic(+ -  * / % ++ --)
//2)assignment( = += -= *= /= %=)
//3)comparison(< > <= >= == !=) 
//4)logical(&& || !)
//5)ternory condition?true:false

//conditional_ statements
//1)simple if
//2)if--else
//3)nested if
//4)ladder else if
//5)switch case

#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter number";
	cin>>num;
	if(num%2==0)
	{
		cout<<num<<" is even";
	}	
	else{
		cout<<num<<" is odd";
	}
	return 0;
}



