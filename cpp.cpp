#include<iostream>

using namespace std;

template <class T1 = int, class T2 = int>
class Base {
public:
    T1 a;
    T2 b;
    Base(T1 x, T2 y) {
        this->a = x;
        this->b = y;
    }
    void display() {
        cout << "The value of a : " << this->a << endl;
        cout << "The value of b : " << this->b << endl;

    }
};

int main()
{
    Base<> obj(8, 9);
    obj.display();

    Base<string, string> obj2("Ajay", "Kumar");
    obj2.display();

    return 0;
}