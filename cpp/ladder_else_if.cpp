#include<iostream>
using namespace std;
int main()
{
	float pr;
	string grade;
	cout<<"enter your percantage";
	cin>>pr;
	if(pr>80)
	{
		grade="A+";
	}
	else if(pr>70)
	{
		grade="B+";
	}
	else if(pr>50)
	{
		grade="C";
	}
	else if(pr>=35)
	{
		grade="pass";
	}
	else if(pr>0)
	{
		grade="fail";
	}
	else{
		grade="invalid_pr";
	}
	cout<<"your grade is "<<grade;
	return 0;
}
