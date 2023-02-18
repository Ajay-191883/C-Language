#include<iostream>

using namespace std;


// Visibility Modes Table
/*
********************Publically  Privately   Protected
Private members     NO          NO          No
Protected members   protected   private     protected
Public members      public      private     protected
*/

class Base {
protected:
    int a = 5;
private:
    int b;
};

class Derived : protected Base {

public:
    int getA() {
        return a;
    }

};
int main()
{
    Base b;
    Derived d;
    // cout << b.a; will not work as protected in base and derived
    cout << "value of a : " << d.getA() << endl;

    return 0;
}