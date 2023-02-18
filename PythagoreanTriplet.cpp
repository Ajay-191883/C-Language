#include<iostream>
#include<math.h>

using namespace std;

int max(int a, int b, int c) {
    if (a > b && a > c) return a;
    else if (a > b && c > a) return c;
    else if (b > a && b > c) return b;
    else return c;
}

bool check(int a, int b, int c) {
    int maxNo = max(a, b, c);
    int x, y;
    if (maxNo == a) {
        x = b;
        y = c;
    }
    else if (maxNo == b) {
        x = a;
        y = c;
    }
    else {
        x = a;
        y = b;
    }

    if (pow(maxNo, 2) == (pow(x, 2) + pow(y, 2))) {
        return true;
    }
    else return false;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (check(a, b, c)) {
        cout << "Pythgorean Triplet";
    }
    else {
        cout << "Not a Pythagorean Triplet";
    }

    return 0;
}