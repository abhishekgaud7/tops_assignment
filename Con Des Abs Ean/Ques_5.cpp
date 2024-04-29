// Write a C++ program to create a class called Triangle that has private 
//member variables for the lengths of its three sides. Implement member 
//functions to determine if the triangle is equilateral, isosceles, or scalene. 
#include<iostream>
using namespace std;
class triangle{
	int side1,side2,side3;
	public:
		void get()
		{
			cout<<"Enter the side1:";
			cin>>side1;
			cout<<"Enter the side2:";
			cin>>side2;
			cout<<"Enter the side3:";
			cin>>side3;
		}
		void determine()
		{
        if (side1 == side2 && side2 == side3) {
          cout << "This is an equilateral triangle." <<endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "This is an isosceles triangle." <<endl;
        } else {
           cout << "This is a scalene triangle." <<endl;
        }
}	
};
main()
{
	triangle obj;
	obj.get();
	obj.determine();
}
