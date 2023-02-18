#include<iostream>

using namespace std;

class Time
{
private:
    int mins, hours;
public:
    Time();
    void getTime();
    friend void addTime(Time, Time);
};

Time::Time()
{
    hours = 00;
    mins = 00;
}

void Time::getTime() {
    cout << "Enter time in hours and minutes " << endl;
    cout << "Hours : ";
    cin >> hours;
    cout << "Minutes : ";
    cin >> mins;
}

void addTime(Time t1, Time t2) {
    int mins = t1.mins + t2.mins;
    int hrs = (t1.hours + t2.hours) + mins / 60;
    mins = mins % 60;
    cout << "Total time in hours and minutes will become -> " << hrs << ":" << mins << endl;
}


int main()
{
    Time t1, t2;
    t1.getTime();
    t2.getTime();

    addTime(t1, t2);

    return 0;
}