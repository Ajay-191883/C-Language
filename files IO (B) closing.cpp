#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    // connecting our file with hout stream
    ofstream hout("sample.txt");
    string str = "Hi there!";

    // writing into file
    hout << str;

    // closing the file
    hout.close();

    ifstream hin("sample.txt");
    string content;
    getline(hin, content);
    cout << content;

    hin.close();

    return 0;
}