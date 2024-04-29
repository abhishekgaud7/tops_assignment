#include <iostream>
using namespace std;
class Number {
    int num;


    friend void swapNumbers(Number& num1, Number& num2);
    
    void display() {
        cout << "Number: " << num << endl;
    }
};

void swapNumbers(Number& num1, Number& num2) {
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}
main() {
    Number num1(5);
    Number num2(10);
    
    cout << "Before swapping:" << endl;
    num1.display();
    num2.display();
    
    swapNumbers(num1, num2);
    
    cout << "After swapping:" << endl;
    num1.display();
    num2.display();

}

