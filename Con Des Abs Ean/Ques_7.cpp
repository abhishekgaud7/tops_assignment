//7. Write a C++ program to implement a class called Date that has private 
//member variables for day, month, and year. Include member functions to 
//set and get these variables, as well as to validate if the date is valid. 
#include<iostream>
using namespace std;
class Date{
	int day,month,year;
	public:
	 void get(){
	 	cout<<"Enter the days:";
	 	cin>>day;
	 	cout<<"Enter the month:";
	 	cin>>month;
	 	cout<<"Enter the year:";
	 	cin>>year;
	 }
	 void display()
	 {
	 	cout<<day<<"\t"<<month<<"\t"<<year<<endl;
	 }
	 void validate()
	 {
	 	
	 	if(month<1 || month > 12  || day < 1 || day > 31 || (month == 2 && day > 29) || 
	 	((month == 4 || month == 6 || month == 9 || month ==11) && day >30)){
	 		cout<<"InValid Date"<<endl;
		 }
		else{
	 	cout<<"valid Date"<<endl;
	 }
}
};
int main(){
		Date obj;
		obj.get();
		obj.display();
		cout<<"check if Date is valid"<<endl;
		obj.validate();
		
		return 0;
}



