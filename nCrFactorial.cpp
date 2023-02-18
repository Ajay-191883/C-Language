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
    // implementing formula nCr of factorial
    //  !(n)/!(n-r)*!(c)

    int n, c, r;
    cout << "n : ";
    cin >> n;
    cout << "r : ";
    cin >> r;

    cout << "nCr for above : ";
    cout << fact(n) / (fact(n - r) * fact(r));
    return 0;
}