#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int num = n;
    int sum = 0;

    while (n % 10 > 0) {
        sum = sum + pow((n % 10), 3);
        n = n / 10;
    }
    if (sum == num) {
        cout << "Armstrong Number";
    }
    else {
        cout << "Not a Armstrong Number";
    }
    return 0;
}