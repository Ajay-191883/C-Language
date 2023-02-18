#include<iostream>

using namespace std;

class Complex
{
private:
    int a, b;
public:
    Complex();
    Complex(int x);
    Complex(int x, int y);
    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex()
{
    a = 0;
    b = 0;
}


Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}

Complex::Complex(int x)
{
    a = x;
    b = 0;
}


int main()
{
    Complex c1(4, 5);
    c1.printNumber();

    Complex c2(4);
    c2.printNumber();

    Complex c3;
    c3.printNumber();



    return 0;
}