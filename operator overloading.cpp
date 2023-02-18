#include<iostream>

using namespace std;
//% Operator overloading
// one operator with multiple definition/ jobs
// syntax---> operator {{operator}} (){}
// it is like a function with some job assigned to it
// For increment/ decrement post and pre operator overloading in same program just to differentiate in pre and post, just write int in argument list of post.

class Complex {
private:
    int a;
public:
    void setData(int x) {
        this->a = x;
    }
    void showData() {
        cout << "The value of a is " << this->a << endl;
    }
    //**************Binary Operator Overloading + ****************
    Complex operator + (Complex C) {
        Complex temp;
        temp.a = this->a + C.a;
        return temp;
    }

    //**************Unary Operator Overloading (negation) - ***************
    Complex operator - () {
        Complex C;
        C.a = -(this->a);
        return C;
    }

    //**************Unary Operator Overloading ++ pre ***************
    Complex operator ++ () {
        Complex C;
        C.a = ++(this->a);
        return C;
    }

    //**************Unary Operator Overloading ++ post ***************
    Complex operator ++ (int) { //! just adding (int) in argument list of
        Complex C;       //! post incrementer just to let compiler         
        C.a = (this->a)++;   //! differentiate the difference 
        return C;       //! as prototype is same
    }

};

int main()
{
    Complex C1, C2, C3, C4, C5, C6;
    C1.setData(5);
    C2.setData(7);

    // + operator definition changing
    C3 = C1 + C2;
    C3.showData();

    // - negation operator definition changing
    C4 = -C3;
    C4.showData();

    // ++ pre operator definition changing
    C5 = ++C1;
    C5.showData();

    // ++ post operator definition changing
    C6 = C2++;
    C6.showData();
    return 0;
}