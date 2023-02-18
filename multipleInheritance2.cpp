#include<iostream>

using namespace std;

class Boy {
protected:
    int age;
public:
    Boy() {};
    void showAge() {
        cout << "Age is : " << age << endl;
    }
};

class Student {
protected:
    string std;
public:
    Student() {};
    void showClass() {
        cout << "Studying in " << std << " in CUH." << endl;
    }
};

class Ajay : public Student, public Boy {
private:
    string name = "Ajay";
public:
    Ajay(int a, string b) {
        age = a;
        std = b;
    };
    void showDetail() {
        cout << "My name is " << name << endl;
        showAge();
        showClass();
    }
};

int main()
{
    Ajay aj(19, "B.Tech 4th sem");
    aj.showDetail();

    return 0;
}
