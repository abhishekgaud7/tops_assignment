//Assume a class cricketer is declared. Declare a derived class batsman from 
//cricketer. Data member of batsman. Total runs, Average runs and best 
//performance. Member functions input data, calculate average runs, Display 
//data. (Single Inheritance) 
#include<iostream>
#include<string>
using namespace std;
class cricketer{
	protected:
	string name;
	int  age;
	public:
		void basicdata()
		{
			cout<<"Enter the name:";
			cin>>name;
			cout<<"Enter the age:";
			cin>>age;
		}
};
class Batsman : public cricketer
{
	int total_runs;
	float Average_runs;
	int best_performance;
	public:
		void data()
		{
			basicdata();
			cout<<"Enter the total runs:";
			cin>>total_runs;
			cout<<"Enter the best_performance";
			cin>>best_performance;
		}
		void calculate_Average_runs()
		{
			Average_runs=total_runs/5.0;
		}
		void display()
		{
        cout << "\nBatsman Details\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << total_runs << endl;
        cout << "Average Runs: " << Average_runs << endl;
        cout << "Best Performance: " << best_performance << endl;
    }
		
};
int main(){
	Batsman obj;
	obj.data();
	obj.calculate_Average_runs();
	obj.display();
	
	return 0;
}
