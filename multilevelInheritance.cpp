#include<iostream>

using namespace std;
// Multilevel Inheritance

// A--->B--->C A is base class of B and Bis base class of C
// A--B--C is inheritance path

class Student {
protected:
    int rollNumber;         // Abstraction of rollNumber
public:
    void setRollNumber(int);
    void getRollNumber(void);
};

void Student::setRollNumber(int r) {
    rollNumber = r;
}

void Student::getRollNumber() {
    cout << "The roll number is " << rollNumber << endl;
}

class Exam : public Student {
protected:
    float maths;                    // Abstraction of maths
    float physics;                  // Abstraction of physics
public:
    void setMarks(float, float);
    void getMarks(void);
};

void Exam::setMarks(float m1, float m2) {
    maths = m1;
    physics = m2;
}

void Exam::getMarks() {
    cout << "The marks obtained in maths are " << maths << endl;
    cout << "The marks obtained in physics are " << physics << endl;
}

class Result : public Exam {
    float percentage;           // Abstraction of percentage
public:
    void displayResult();
};

void Result::displayResult() {
    getRollNumber();
    getMarks();
    cout << "Your Result is " << (maths + physics) / 2 << " %" << endl;
}

int main()
{
    Result my;
    my.setRollNumber(420);
    my.setMarks(94.0, 90.0);
    my.displayResult();
    return 0;
}