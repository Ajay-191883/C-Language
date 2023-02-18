#include<iostream>

using namespace std;

class Employee
{
private:
    int id;
    static int count;//* static variable :- default value= 0, only one copy in entire class, so all the instances i.e objects of that class shares it. also called as Class variable.

public:
    void setData() {
        cout << " Enter the id : " << endl;
        cin >> id;
        count++;
    }
    void getData() {
        cout << "Id of this employee is " << id << " & empCode is " << count << endl;
    }
    static void getCounter() {//* static function:- only uses static data members or data functions and do some work
        cout << "Counter is at " << count;
    }
};

int Employee::count; // default value = 0 but we can initialise it here

int main()
{
    Employee aj;
    aj.setData();
    aj.getData();
    Employee::getCounter();// static data function can be called by only using class name with ::

    Employee vj;
    vj.setData();
    vj.getData();
    Employee::getCounter();

    Employee dj;
    dj.setData();
    dj.getData();
    Employee::getCounter();

    return 0;
}