#include<iostream>

using namespace std;

class Shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;


public:
    void initCounter(void)
    {
        counter = 0;
    }

    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void) {
    cout << "Enter Id of your item " << counter << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void) {
    for (int i = 0; i < counter; i++) {
        cout << "The Price of item with  Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}


// class Employee
// {
// private:
//     int a, b, c;
// public:
//     int d, e;

//     void setData(int a1, int b1, int c1);

//     void getData() {
//         cout << "The value of a : " << a;
//         cout << "The value of b : " << b;
//         cout << "The value of c : " << c;
//         cout << "The value of d : " << d;
//         cout << "The value of e : " << e;
//     };
// };

// void Employee::setData(int a1, int b1, int c1) {
//     a = a1;
//     b = b1;
//     c = c1;
// }

int main()
{
    // Employee aj;
    // aj.d = 5;
    // aj.e = 9;
    // aj.setData(1, 2, 3);
    // aj.getData();

    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();



    return 0;
}