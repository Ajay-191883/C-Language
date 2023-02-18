#include<iostream>

using namespace std;

class Complex {
    int a, b;
public:
    // Creating a constructor 
    // Constructor is a special member function with same name as that of class name.
    // It is automatically invoked whenever object is created
    // It is used to initialize the objects of its class

    Complex();
    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i";
    }
};

Complex::Complex() { // Default constructor as it doesn't take any parameter
    a = 10;
    b = 0;
}

int main()
{
    Complex c;
    c.printNumber();

    return 0;
}

// Characteristics of constructor
//1. Should be declared in the public section of the class
//2. Automatically invoked whenever object created
//3.Do not have return type and they don't return values
//4. It can have default arguments
//5. we cannot refer to their address