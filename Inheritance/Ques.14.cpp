//Write a program to find the max number from given two numbers 
//using friend function 
#include <iostream>
using namespace std;
class Number {
    private:
        int num;
    public:
        Number(int n) : num(n) {}
        friend int max(const Number&, const Number&);
};

int max(const Number& a, const Number& b) {
    return (a.num > b.num) ? a.num : b.num;
}

int main() {
    Number num1(10);
    Number num2(20);
    std::cout << "Max: " << max(num1, num2) << std::endl;
    return 0;
}
