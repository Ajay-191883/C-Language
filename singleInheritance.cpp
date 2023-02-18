#include<iostream>

using namespace std;

class Base
{
private:
    int data1;
public:
    Base() {};
    int data2;
    void setData();
    int getData1();
};

void Base::setData() {
    data1 = 10;
    data2 = 20;
    cout << data1 << endl;
}

int Base::getData1() {
    return data1;
}

class Derived : public Base {
    int data3;
public:
    Derived() {};
    void process();
    void display();
};

void Derived::process() {
    data3 = data2 * getData1();
}

void Derived::display() {
    cout << "Data 1 is : " << getData1() << endl;
    cout << "Data 2 is : " << data2 << endl;
    cout << "Data 3 is : " << data3 << endl;
}

int main()
{
    Derived obj;
    obj.setData();
    obj.process();
    obj.display();

    return 0;
}