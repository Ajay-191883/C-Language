#include<iostream>

using namespace std;

class Simple
{
private:
    int data1, data2;
public:
    Simple(int, int);
    void printData() {
        cout << "THe value of data is " << data1 << " & " << data2;
    }
};


Simple::Simple(int x, int y = 3)
{
    data1 = x;
    data2 = y;
}



int main()
{
    Simple s1(1);
    s1.printData();

    Simple s2(1, 6);
    s2.printData();

    return 0;
}