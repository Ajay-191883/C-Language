#include<iostream>

using namespace std;

// Destructor never takes any arguments nor returns any value
// to free the allocated memory to objects after program ends or block ends

int count = 0;
class Num {
public:
    Num() {
        count++;
        cout << "This is the time when constructor is called for object" << count << endl;
    }

    ~Num() {
        cout << "This is the time when my destructor called for object no. " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    Num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        Num n2, n3;
        cout << "Entering this block" << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}