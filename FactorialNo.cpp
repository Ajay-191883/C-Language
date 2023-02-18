#include<iostream>
#include<math.h>

using namespace std;

int fact(int n) {
    int num = 1;
    while (n > 0) {
        num = num * n;
        n--;
    }
    return num;
}

int main() {
    int n;
    cin >> n;

    cout << "Factorial is " << fact(n);
    return 0;
}