#include<iostream>

using namespace std;

class Complex {
    int real, imaginary;
public:
    void getData() {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    void setData(int a, int b) {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // Complex c1;

    // Complex* ptr = &c1; // Pointer to object

    Complex* ptr = new Complex;

    // (*ptr).setData(5, 10); is exactly same as
    ptr->setData(5, 10);
    // (*ptr).getData(); or
    ptr->getData();

    // c1.setData(5, 10);
    // c1.getData();

//* Array of objects
    Complex* ptr1 = new Complex[4];
    ptr->setData(6, 12);
    ptr->getData();
    (ptr + 1)->setData(1, 5);
    (ptr + 1)->getData();



    return 0;
}