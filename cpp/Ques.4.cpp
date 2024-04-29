// Write a C++ program to implement a class called Circle that has private 
//member variables for radius. Include member functions to calculate the 
//circle's area and circumference. 
#include <iostream> 
//#include <cmath>
using namespace std;
const double pie = 3.14159; 
class Circle { 
    double radius;

  public:
   
    Circle(double rad): radius(rad) {}

   
    double calculateArea() {
      return pie * (radius*radius);
    }

   
    double calculateCircumference() {
      return 2 * pie * radius;
    }
};
main() {
 
  double radius;
  std::cout << "Input the radius of the circle: ";
  std::cin >> radius;
  Circle circle(radius);

 
  double area = circle.calculateArea();
  std::cout << "Area: " << area << std::endl; 


  double circumference = circle.calculateCircumference(); 
  std::cout << "Circumference: " << circumference << std::endl;

}
