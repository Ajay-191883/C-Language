#include<iostream>
#include<fstream>

using namespace std;

// The useful classes for working with files in c++
//% fstreambase
//% ifstream -> derived from fstreambase
//% ofstream -> derived from fstreambase

// In order to ork with files in c++, you will have to open it .
//Primarily, there are 2 ways to open file
//% Using the constructor
//% Using the member function open() of the class

int main() {
    string str = "Ajay Kumar";
    string str2;

    // Opening and writing files using constructor 
    // ofstream out("sample.txt");
    // out << str;

    // Opening and reading files using constructor 
    ifstream in("sample.txt");
    //in >> str2; // only take one word upto next line or space
    getline(in, str2);
    cout << str2;

}