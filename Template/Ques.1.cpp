//1. Write a program of to swap the two values using template 
#include <iostream> 
using namespace std; 
template <class T> 
int swap_numbers(T& x, T& y) 
{ 
	T t; 
	t = x; 
	x = y; 
	y = t; 
	return 0; 
} 
main() 
{ 
	int a, b; 
	a = 10, b = 20; 
	cout<<"Before Swapping"<<"\t"<<"a="<<a<<" "<<"b="<<b<<endl;
	swap_numbers(a, b); 
	cout<<"After Swapping"<<"\t"<<"a="<<a<<" "<<"b="<<b<<endl;
}

