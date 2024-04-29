//5. Assume that the test results of a batch of students are stored in three different 
//classes. Class Students are storing the roll number. Class Test stores the 
//marks obtained in two subjects and class result contains the total marks 
//obtained in the test. The class result can inherit the details of the marks 
//obtained in the test and roll number of students. (Multilevel Inheritance) 
#include <iostream>
using namespace std;
class Student {
protected:
    int rollNumber;
public:
    void setRollNumber(int roll) {
        rollNumber = roll;
    }
    int getRollNumber() {
        return rollNumber;
    }
};

class Test : public Student {
protected:
    int subject1Marks;
    int subject2Marks;
public:
    void setMarks(int marks1, int marks2) {
        subject1Marks = marks1;
        subject2Marks = marks2;
    }
    void displayMarks() {
        cout << "Marks in Subject 1: " << subject1Marks << endl;
        cout << "Marks in Subject 2: " << subject2Marks << endl;
    }
};

class Result : public Test {
public:
    int calculateTotalMarks() {
        return subject1Marks + subject2Marks;
    }
    void displayResult() {
        cout << "Roll Number: " << getRollNumber() << endl;
        displayMarks();
        cout << "Total Marks: " << calculateTotalMarks() << endl;
    }
};

int main() {
    Result studentResult;

    studentResult.setRollNumber(101);

    studentResult.setMarks(80, 75);

    studentResult.displayResult();

    return 0;
}

