#include<iostream>
#include<cmath>

using namespace std;

class simpleCalc {
protected:
    int a;
    int b;
    int addRes, subRes, mulRes;
    float divRes;
public:
    simpleCalc() {};
    simpleCalc(int num1, int num2) {
        a = num1;
        b = num2;
    }
    void add() {
        addRes = a + b;
    };
    void sub() {
        subRes = a - b;
    };
    void mul() {
        mulRes = a * b;
    };
    void div() {
        divRes = a / b;
    };

    void showSimple() {
        cout << "adding these no. gives : " << addRes << endl;
        cout << "subtracting these no. gives : " << subRes << endl;
        cout << "multiplying these no. gives : " << mulRes << endl;
        cout << "dividing these no. gives : " << divRes << endl;
    }
};

class scientificCalc {
protected:
    int c;
    float sinVal, cosVal, squareVal, sqRootVal;

public:
    scientificCalc() {};
    scientificCalc(int num1) {
        c = num1;
    }
    void sinFunc() {
        sinVal = sin(c);
    }
    void cosFunc() {
        cosVal = cos(c);
    }
    void squareFunc() {
        squareVal = pow(c, 2);
    }
    void sqRootFunc() {
        sqRootVal = sqrt(c);
    }

    void showScientific() {
        cout << "Sin value of this no. : " << sinVal << endl;
        cout << "Cos value of this no. : " << cosVal << endl;
        cout << "Square value of this no. : " << squareVal << endl;
        cout << "Square root value of this no. : " << sqRootVal << endl;
    }

};

class HybridCalc : public simpleCalc, public scientificCalc {

public:
    HybridCalc() {
        cout << "Welcome....." << endl;
    }
    HybridCalc(int num1) {
        c = num1;
    }
    HybridCalc(int num1, int num2) {
        a = num1;
        b = num2;
    }
    void displaySimple() {
        showSimple();
        cout << endl << "*****************************************" << endl;
    }
    void displayScientific() {
        showScientific();
        cout << endl << "*****************************************" << endl;
    }
};

int main()
{
    // simpleCalc calc1(10, 5);
    // calc1.add();
    // calc1.sub();
    // calc1.mul();
    // calc1.div();
    // calc1.show();

    // scientificCalc calc2(0);
    // calc2.sinFunc();
    // calc2.cosFunc();
    // calc2.squareFunc();
    // calc2.sqRootFunc();
    // calc2.show();

    HybridCalc calc3(10, 5);
    calc3.add();
    calc3.sub();
    calc3.mul();
    calc3.div();
    calc3.displaySimple();

    HybridCalc calc4(30);
    calc4.sinFunc();
    calc4.cosFunc();
    calc4.squareFunc();
    calc4.sqRootFunc();

    calc4.displayScientific();

    return 0;
}