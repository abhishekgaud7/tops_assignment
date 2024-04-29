#include<iostream>
#include<string.h>
using namespace std;
class Addstring{
	private:
		char s1[30] , s2[30];
		
		public:
			Addstring(char str1[] , char str2[])
			{
				
				strcpy(this->s1,str1);
				strcpy(this->s2,str2);
			}
			
			//overload operator to concat the string
			Addstring operator+()
			
			{
				cout<<"\nConcatenation: " << strcat(s1,s2);
			}
};
int main()
{
	
	Addstring obj1("Abhishek","Abhi");
	
	+obj1;
}
