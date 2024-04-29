#include<iostream>
using namespace std;
class Student{
	public:
		int standard, roll_num,marks;
		string name;
		public:
			Student(int standard, string name, int roll_num, int marks)
			{
				this->standard=standard;
				this->name=name;
				this->roll_num=roll_num;
				this->marks=marks;
					}	
};
class address
{
	public:
	string city;
	Student *ref;
	public:
		address(string city, Student *ref)
		{
			this->city=city;
			this->ref=ref;
			if(ref->marks>=90){
				cout<<"Student grade is A";
			}
			else if(ref->marks>=80){
				cout<<"Student grade is B";
			}
			else if (ref->marks>=70){
				cout<<"Student garde is C";
			}
			else if(ref->marks>=60){
				cout<<"Student grade is D";
			}else{
				cout<<"Student is Fail..........";
			}
			cout<<" City is"<<city<<endl;
		}
};
int main()
{
	
		Student s(11, "Abhishek", 1002, 89);
		address a("Gwalior",&s);
		
		return 0;
	
	
}
