#include<iostream>
#include <time.h>
#include <ctime>    
using namespace std;

void printFibonacci(int n) {
    static int n1 = 0, n2 = 1, n3;
    if (n > 0) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3 << " ";
        printFibonacci(n - 1);
    }
}
int main() {
    clock_t startClock, finishClock;
    double timeCount;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    cout << "0 " << "1 ";
    startClock = clock();
    printFibonacci(n - 2);  //n-2 because 2 numbers are already printed    
    finishClock = clock();
    timeCount = finishClock - startClock;
    cout << "\nExecution time : " << timeCount / 100;
    return 0;
}