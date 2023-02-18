#include<iostream>
#include<math.h>

using namespace std;

bool isPrime(int n) {
    for (int j = 2; j <= sqrt(n); j++) {
        if (n % j == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << "Prime no. bw " << num1 << " & " << num2 << " are ";
    for (int i = num1; i <= num2; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}