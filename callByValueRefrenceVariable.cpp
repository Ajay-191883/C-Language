#include<iostream>

using namespace std;

// Swapping by value calling
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Swapping by calling reference using pointer
void swapPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Swapping by reference variable C++
void swapRefVarible(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Reference return C++
int& swapRefVarRet(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int num1 = 5, num2 = 7;

    //* Call by value --> this will not swap the num1 & num2
    // as it will simply copy the actual params into formal params and swap the formal params so their will be no change in actual params. 

    cout << "Initial values of num1 & num2 : " << num1 << " " << num2 << endl;
    swap(num1, num2);
    cout << "Now values of num1 & num2 : " << num1 << " " << num2 << endl;

    //* Call by reference using pointer --> this will swap the num1 & num2
    // now in this as we are passing the address of the actual params into the function so function will change the values corresponding to that address, and address in a memory is unique so changes will be reflected back to the actual params.

    cout << "Initial values of num1 & num2 : " << num1 << " " << num2 << endl;
    swapPointer(&num1, &num2);
    cout << "Now values of num1 & num2 : " << num1 << " " << num2 << endl;

    //* Call by reference using reference variable --> this will swap the num1 & num2
    // in this we are using reference variable of C++ for swapping
    // &a , &b in function will let a , b to point directly to num1, num2.
    // so the swapped values wil be reflected back to the actual params.

    cout << "Initial values of num1 & num2 : " << num1 << " " << num2 << endl;
    swapRefVarible(num1, num2);
    cout << "Now values of num1 & num2 : " << num1 << " " << num2 << endl;

    //* Returning reference
    swapRefVarRet(num1, num2) = 200;
    cout << "Now values of num1 & num2 : " << num1 << " " << num2 << endl;

    return 0;
}