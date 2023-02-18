#include<iostream>

using namespace std;

//* Here display function is showing run time polymorphism as same name but different forms and actually only in runtime it will be decided, which to invoke.

class Base {
public:
    int a = 6;
    void display() {
        cout << "Hi " << a << endl;
    }
};

class Derived : public Base {
public:
    int b = 0;
    void display() {
        cout << "Hello " << b << endl;
    }

};

int main()
{
    //% If we point Base class Pointer to Derived CLass then it is legal but whenever we call methods by this pointer, then Base class methods will be called (because pointer type is Base class) and it is known as Late Binding.
    Base* basePtr = new Base;
    Base baseObj;
    Derived derivedObj;
    basePtr = &derivedObj; // Pointing Base class Pointer to Derived CLass
    basePtr->display();
    // basePtr->display(); giving error as this method is not in base class.
    basePtr->a = 10;
    basePtr->display();

    Derived* derivedPtr = new Derived;
    derivedPtr->display();

    derivedPtr->b = 15;
    derivedPtr->display();



    return 0;
}