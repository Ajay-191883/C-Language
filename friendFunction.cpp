#include<iostream>

using namespace std;

class Complex
{
private:
    int a;
    int b;
public:

    void setNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    // Below line means that non member function sumComplex is allowed to do anything with private parts(members)
    friend Complex sumComplex(Complex o1, Complex o2);

    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }

};

Complex sumComplex(Complex o1, Complex o2) {
    Complex c3;
    c3.setNumber(o1.a + o2.a, o1.b + o2.b);
    return c3;
}


int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}

/*Properties of Friend Function
1. Not in the scope of the class
2. since it is not in the scope of the class so it cant be called from the object of that class ----> c1.sumComplex() Invalid
3. Usually contains the objects as arguments
4. Can be invoked without the help of any object
5. Can be declared in public OR private section of the class
6. It cannot access the members directly but it needs object to call their members.

*/