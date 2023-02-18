#include<iostream>

using namespace std;


// here display function is now showing run-time polymorphism and only in run time we look for virtual function and run the needed code
class Base {
public:
    int baseVar = 1;
    virtual void display() {
        cout << "Displaying base class variable " << baseVar << endl;
    }
};

class Derived : public Base {
public:
    int derivedVar = 2;
    void display() {
        cout << "Displaying base class variable " << baseVar << endl;
        cout << "Displaying derived class variable " << derivedVar << endl;
    }

};

int main()
{
    Base* basePtr = new Base;
    Base baseObj;
    Derived derivedObj;

    basePtr = &derivedObj;// basePtr pointing to derived class
    basePtr->display(); // Now as we mentioned base class display fuction as virtual then that display function will be called which is in class pointed by pointer.
    return 0;
}