//Write a C++ Program to find Area of Rectangle using inheritance 
#include<iostream>
using namespace std;
class shape{
	protected:
		int width;
		int height;
	public:
		void setwidth(int w){
			width=w;
		}
			void setheight(int h){
			height=h;
		}
			
};
class rectangle : public shape
{
	public:
	
		int area(){
			return width*height;
		}
};
main()
{
	rectangle react;
	int w,h;
	cout<<"Enter the width:";
	cin>>w;
	cout<<"Entet the length:";
	cin>>h;
	
	react.setwidth(w);
	react.setheight(h);
	cout<<"Area of recatngle is:"<<react.area()<<endl;
}
