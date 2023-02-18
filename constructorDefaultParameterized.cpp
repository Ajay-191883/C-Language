#include<iostream>
#include<math.h>

using namespace std;

// class Complex
// {
// private:
//     int a;
//     int b;
// public:

//     Complex(int, int); // Constructor declaration
//     void printNumber() {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }

// };

// // Complex::Complex() { // Default constructor as it doesn't take any parameter
// //     a = 10;
// //     b = 0;
// // }

// Complex::Complex(int x, int y) { // --> Parameterized constructor, as it takes parameters.
//     a = x;
//     b = y;
// }

class Point
{
private:
    int a, b;
public:
    friend float calcDistance(Point, Point);
    Point(int x, int y);
    void displayPoint() {
        cout << "The Point is (" << a << "," << b << ")" << endl;
    }
};

Point::Point(int x, int y)
{
    a = x;
    b = y;
}

float calcDistance(Point p1, Point p2) {
    float distance = sqrt(pow((p1.a - p2.a), 2) + pow((p1.b - p2.b), 2));
    return distance;
}


int main()
{
    // //Implicit call
    // Complex a(4, 6);

    // //Explicit call
    // Complex b = Complex(5, 7);

    // a.printNumber();
    // b.printNumber();

    Point p(1, 1);
    p.displayPoint();

    Point q(1, 1);
    q.displayPoint();

    cout << "Distance bw these points is " << calcDistance(p, q);

    return 0;
}