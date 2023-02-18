#include<iostream>

using namespace std;

int product(int, int);

//* default argument
float moneyGet(const int year, int money = 500) {// here money is default argument
    //* constant argument
    // year = 5; as it is constant value so do not manipulate
    return year * money;
}



int main()
{
    int i = 2, j = 7;
    cout << "Product is " << product(i, j);
    cout << "Product is " << product(i, j);
    cout << "Product is " << product(i, j);
    cout << "money : " << moneyGet(2);
    return 0;
}

// int product(int a, int b) {
//     return a * b;
//* } or  creating it as inline function
inline int product(int a, int b) {
    //! static int c = 0; // this line will be eecuted only once 
    // c = c + 1; // then whenever this function called value saved here
    return a * b;
    // Now in compile time function will be replaced by the function definition.
    // Not use in case of static variables, recursion, or loops
}
