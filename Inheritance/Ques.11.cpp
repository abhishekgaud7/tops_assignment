// Write a program to calculate the area of circle, rectangle and triangle 
//using Function Overloading 
//Rectangle: Area * breadth 
//Triangle: ½ *Area* breadth 
//Circle: Pi * Area *Area
#include<iostream>
using namespace std;
class A{
	int length,breadth;
	float breadth_2,height,radius;
		public:
			void get()
			{
				cout<<"Enter the length:";
				cin>>length;
				cout<<"Enter the breadth:";
				cin>>breadth;
				cout<<"rectangle is:"<<length*breadth<<endl;	
			}
			void get(float h1 , float h2)
			{
					height=h1;
					breadth_2=h2;
					cout<<"Triangle is:"<<0.5*height*breadth_2<<endl;	
			}
			void get(int r1)
			{
				radius=r1;
				cout<<"Raidus is:"<<3.14*radius*radius;	
					}
			
			};
main(){
	A obj;
	obj.get();
	obj.get(5.0,7.0);
	obj.get(51);
	
}
