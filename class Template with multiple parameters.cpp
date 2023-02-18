#include<iostream>

using namespace std;

template <class T1, class T2>
class Base {
    T1 data1;
    T2 data2;
public:
    Base(T1 a, T2 b) {
        this->data1 = a;
        this->data2 = b;
    }
    void showData() {
        cout << this->data1 << this->data2;
    }
};

int main()
{
    Base <string, int> obj("My age is ", 19);
    obj.showData();

    return 0;
}