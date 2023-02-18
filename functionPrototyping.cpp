#include<iostream>

using namespace std;

//* Function Prototyping
// helps to use function in main( even before initialising the function itself before it)

int sum(int a, int b);  // --- acceptable prototyping
// int sum(int, int);  // --- acceptable prototyping
// int sum(a, b);  //! --- Not - acceptable prototyping

void greet(); // OR void greet(void)



int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    greet();

    // num1 & num2 are actual parameters
    cout << "Sum is " << sum(num1, num2);

    return 0;
}


int sum(int a, int b) {
    // here a, b are formal parameters taking values from actual parameters num1, num2 
    int c = a + b;
    return c;
}

void greet() {
    cout << "Hello" << endl;
}