#include<iostream>
using namespace std;
class calculator{
	int num1,num2;
	 
	 public:
	 	char choice;
	 	void menu()
	 	{
	 		cout<<"Enter + for Addition"<<endl;
	 		cout<<"Enter - for Subtraction"<<endl;
	 		cout<<"Enter * for Multiplication"<<endl;
	 		cout<<"Enter / for Division"<<endl;
	 		cout<<"Enter % for Modulo"<<endl;
	 		cout<<"Enter your choice";
	 		cin>>choice;
		 }
		 void get()
		 {
		 	cout<<"Enter numnber 1 and number 2";
		 	cin>>num1>>num2;
		 }
		 int add()
		 {
		 	return	num1+num2;
		 }
		  int Sub()
		 {
		 	return	num1-num2;
		 }
		  int mul()
		 {
		 	return	num1*num2;
		 }
		  int div()
		 {
		 	return	num1/num2;
		 }
		  int Mod()
		 {
		 	return	num1%num2;
		 }
};
main(){
	calculator cal;
	cal.menu();
	cal.get();
	switch(cal.choice)
	{
		case'+':
			cout<<"Addition is"<<cal.add();
			break;
		case'-':
			cout<<"Subtraction is"<<cal.Sub();
			break;
		case'*':
			cout<<"Multiplication is"<<cal.mul();
			break;
		case'/':
		cout<<"Division is"<<cal.div();
			break;
		case'%':
		cout<<"Modulo is"<<cal.Mod();
			break;	
		default:
			cout<<"Invalid choice";		
	}
	
}
