#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream out;
    out.open("sample.txt");
    out << "This is me\n";
    out << "This is also me\n";
    out << "This is also me\n";
    out.close();

    ifstream in;
    string str, str2;
    in.open("sample.txt");
    // in >> str >> str2;
    // in >> str2;
    // cout << str << str2;

    while (in.eof() == 0) {
        getline(in, str);
        cout << str << endl;
    }

    in.close();
    return 0;
}