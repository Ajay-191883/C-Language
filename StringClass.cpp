#include<iostream>

using namespace std;

class String
{
private:
    string result;
    string s1, s2;

public:
    String() {
        cout << "This is a String Class " << endl;
    };
    void storeStr();
    string concatStr();
    void compareStr();
    void displayStr();

};

void String::storeStr() {
    cout << "Enter string 1 : " << endl;
    cin >> s1;

    cout << "Enter string 2 : " << endl;
    cin >> s2;
}

string String::concatStr() {
    result = s1 + " " + s2;
    return result;
}

void String::compareStr() {
    if (s1 == s2)
        cout << "Both strings are equal " << endl;
    else
        cout << "Strings entered are not equal " << endl;
}

void String::displayStr() {
    cout << "Resulting String is : " << result;
}


int main()
{
    String ajay_str;
    string s1, s2;

    ajay_str.storeStr();
    ajay_str.concatStr();
    ajay_str.compareStr();
    ajay_str.displayStr();

    return 0;
}