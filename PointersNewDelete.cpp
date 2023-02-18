#include<iostream>

using namespace std;

int main()
{
    // Basic Example Pointer
    int a = 4;
    int* ptr = &a;
    cout << "The value at " << ptr << " is " << *ptr << endl;

    // new keyword/ operator
    // int* p = new int(5);
    float* p = new float(5);
    cout << "The value at " << p << " is " << *p << endl;

    int* arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    //delete operator
    //% delete p; free the dynamic allocated memory;
    //% delete[] arr; free the dynamic allocated block of memory
    cout << "The value at " << arr << " is " << *arr << endl;
    cout << "The value at " << arr + 1 << " is " << *(arr + 1) << endl;
    cout << "The value at " << arr + 2 << " is " << *(arr + 2) << endl;

    return 0;
}