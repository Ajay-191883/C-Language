#include<iostream>

using namespace std;

class Number
{
private:
    int a;
public:
    Number() {
        a = 0;
    };
    Number(int num);
    Number(Number& obj);
    void display() {
        cout << "The number for this object is " << a << endl;
    }
};

Number::Number(int num)
{
    a = num;
}

// When no copy constructor is found, compiler supplies its own copy constructor
Number::Number(Number& obj)
{
    cout << "Copy Constructor called";
    a = obj.a;
}


int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(x);// Copy constructor invoked
    z1.display();

    z2 = z; // copy constructor not called

    Number z3 = z; // Copy constructor invoked


    return 0;
}