#include<iostream>

using namespace std;
//Template in c++
// As Class is a blueprint of object
// similarly Template is a blueprint of Class

template <class T>
class Vector {
public:
    int size;
    T* arr;
    Vector(int m) {
        size = m;
        arr = new T[size];
    }
    T dotProduct(Vector& v) {
        T d = 0;
        for (int i = 0; i < size; i++) {
            d += (this->arr[i] * v.arr[i]);
        }
        return d;
    }
};

int main()
{
    // Vector v1(3);
    // v1.arr[0] = 3;
    // v1.arr[1] = 2;
    // v1.arr[2] = 1;

    // Vector v2(3);
    // v2.arr[0] = 3;
    // v2.arr[1] = 2;
    // v2.arr[2] = 1;

    // int a = v1.dotProduct(v2);
    // cout << a;

    Vector <float>v1(3);
    v1.arr[0] = 1.3;
    v1.arr[1] = 2.5;
    v1.arr[2] = 1.7;

    Vector <float>v2(3);
    v2.arr[0] = 3.1;
    v2.arr[1] = 2.3;
    v2.arr[2] = 1.4;

    float a = v1.dotProduct(v2);
    cout << a;
    return 0;
}