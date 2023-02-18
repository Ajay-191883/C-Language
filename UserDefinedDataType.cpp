#include<iostream>

using namespace std;

int main()
{

    //* Pointer
    // int x = 5;
    // int* y;
    // y = &x;
    // // '&' (Address of) Operator
    // cout << y << endl;// same
    // cout << &x << endl;// same

    // // '*' (Value At) Operator (Dereferencing Operator)
    // cout << *y << endl; // same
    // cout << x << endl;  // same

    // // Pointer to pointer
    // int** z;
    // z = &y;

    // cout << "Address of y " << &y << endl;
    // cout << "Address of y " << z << endl;
    // cout << "Value at z " << *z << endl;
    // cout << "Value at (address (valueAt z) )" << **z << endl;

    //* Array - Pointer
    // int i = 0;
    // int marks[] = {
    //     99, 45, 55, 65, 75, 85, 95
    // };

    // for (int i = 0; i < 7; i++)
    // {
    //     cout << "Value at " << i << " index " << marks[i] << endl;
    // } 

    // while (i < 7)
    // {
    //     cout << "Value at " << i << " index " << marks[i] << endl;
    //     i++;
    // }

    // do
    // {
    //     cout << "Value at " << i << " index " << marks[i] << endl;
    //     i++;
    // } while (i < 7);

    // int* p = marks;
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << "Value at " << i << " index " << *(p + i) << endl;
    // }

    //* Structure
    // struct employee
    // {
    //     int eId;
    //     char favChar;
    //     float salary;
    // }; OR
    // typedef struct employee {
    //     int eId;
    //     char favChar;
    //     float salary;
    // } ep;

    // // struct employee ajay;
    // ep ajay;
    // ajay.eId = 1;
    // ajay.favChar = 'a';
    // ajay.salary = 12009900;

    // cout << ajay.eId << " " << ajay.favChar << " " << ajay.salary;

    //* Union
    // union money
    // {
    //     int rs;
    //     char dol;
    //     float pou;
    // };

    // union money m1;
    // m1.dol = 'g';
    // m1.pou = 44.5;// overwrite m1.dol as memory is shared and only one of them can be accessed at a time only.
    // cout << m1.dol << endl << m1.pou;

    //* Enum
    // enum meal {
    //     breakfast, lunch, dinner
    // };

    // meal m1 = breakfast;
    // cout << m1;


    return 0;
}