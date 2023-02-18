#include<iostream>

using namespace std;

class A {
    int a;
public:
    void setData(int a) {
        this->a = a;

        // int y = 5;
        // int& x = y;
        // cout << &y << endl;//same
        // cout << &x << endl;// same
        // cout << x << endl;
    }

    A& getData() {
        cout << "The value of a is " << a << endl;
        cout << "The address in this pointer is " << this << endl;
        return *this;
    }
};

int main()
{
    //% this keyword
    // which is a pointer which points to the object which invokes the member function   
    A a;
    a.setData(4);
    a.getData().getData();

    return 0;
}