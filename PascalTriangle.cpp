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

int nCr(int n, int r) {
    return (fact(n) / (fact(n - r) * fact(r)));
}

int main() {
    // Pascal Triangle
    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1

    // implementing formula nCr of factorial 
    //  !(n)/!(n-r)*!(c)

    // as each term is nCr from n = (0 ..... row-1) & r = (0 .....column -1) 

    int row;
    cin >> row;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}