#include<iostream>
using namespace std;
class bank{
	string name;
	double Account_number;
	string Types_account;
	double Balance_amount;
	 
	 public:
	 	int choice;
	 	
	public:
	void get_data(){
		cout<<"Enter your name:";
		cin>>name;
		cout<<"Enter your Account_number:";
		cin>>Account_number;
		cout<<"Enter your Types_account:";
		cin>>Types_account;
		cout<<"Enter your Balance_account:";
		cin>>Balance_amount;
		cout<<"Enter 1 for deposite and 2 for withdrawal 3 for invalid:"<<endl;
		cin>>choice;
	}

	void deposite(){
		double depo_Balance;
		cout<<"Enter your Deposite Amount:"<<endl;
		cin>>depo_Balance;
		this->Balance_amount+=depo_Balance;
			}
	void withdraw(){
		double W_Balance;
		cout<<"Enter your Withdraw Amount:"<<endl;
		cin>>W_Balance;		
		if(W_Balance>Balance_amount){
			cout<<"Can't withdraw";
		}else{
			Balance_amount=Balance_amount-W_Balance;		}
			}
			
		void display(){
			cout<<"Your name is"<<name<<"\tYour Balance is"<<Balance_amount;
		}
};
int main(){
	bank obj;
	obj.get_data();
	switch(obj.choice)
	{
		case 1:
			obj.deposite();
			break;
		case 2:
			obj.withdraw();
			break;
			
			default:	
			cout<<"Invalid choice:";
			break;		
				}
	obj.display();			

}
