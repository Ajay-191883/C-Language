#include<iostream>

using namespace std;

// class Employee
// {
// private:
//     int id;
//     int salary;
// public:
//     void setId() {
//         salary = 122;
//         cout << "Enter the id of employee" << endl;
//         cin >> id;
//     }

//     void getId() {
//         cout << "The id of this employee is " << id << endl;
//     }
// };

class Complex {
private:
    int a;
    int b;
public:
    void setData(int v1, int v2) {
        a = v1;
        b = v2;
    }
    void setDataBySum(Complex o1, Complex o2) {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber() {
        cout << "Your complex no. is " << a << "+i" << b << endl;
    }
};



int main()
{
    // // Employee aj, vj, dj;

    // Employee team[3];
    // for (int i = 0;i < 3;i++) {
    //     team[i].setId();
    //     team[i].getId();
    // }

    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();


    return 0;
}