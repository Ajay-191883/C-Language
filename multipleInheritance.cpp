#include<iostream>

using namespace std;

// Syntax for multiple inheritance 
// class derivedClassName : visibilityMode baseClass1, visibilityMode baseClass2{
//     class body of derived class
// }

class Base1 {
protected:
    int base1int;
public:
    void setBase1int(int a) {
        base1int = a;
    }
};

class Base2 {
protected:
    int base2int;
public:
    void setBase2int(int a) {
        base2int = a;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() {
        cout << "The value of Base1 is : " << base1int << endl;
        cout << "The value of Base2 is : " << base2int << endl;
        cout << "The sum of Base1 & Base2 is : " << base1int + base2int << endl;
    }
};

int main()
{
    Derived obj;
    obj.setBase1int(5);
    obj.setBase2int(10);
    obj.show();

    return 0;
}