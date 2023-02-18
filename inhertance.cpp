#include<iostream>

using namespace std;
// Inheritance Types:-
/*
Single Inheritance:- Base ----> Derived
Multiple Inheritance:- Base1, BAse2 ---> Derived1
Multilevel Inheritance:- BAse1 --> Derived1 --> Derived2
Heirarchical inheritance:- Base1--> Derived1, Derived2
Hybrid Inheritance:- Multilevel + Multiple inheritance:-  Base1-->Derived1,Derived2-->Derived3
*/
// Base class
class Employee {

public:
    int id;
    float salary;
    Employee() {};
    Employee(int inpId) {
        id = inpId;
        salary = 34.0;
    }
};

// Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    // class members/methods/etc..
}
Notes:
--> Default visibility mode is private.
--> Public visibility mode : Public members of the base class becomes public member of the derived class.
--> Private visibility mode : Public members of the base class becomes private member of the derived class.
--> Private members are never inherited.
*/

// Derived class Programmer from base class Employee 
class Programmer : public Employee {
public:
    int languageCode;
    Programmer(int inpId) {
        id = inpId;
        languageCode = 9;
    }
};

int main()
{
    Employee E1(1), E2(2);
    cout << E1.salary << endl;
    Programmer skillF(1);
    cout << skillF.id << endl;
    return 0;
}