#include<iostream>

using namespace std;

class Student {
protected:
    int rollNo;
public:
    void setNo(int a) {
        rollNo = a;
    }
    void printNo() {
        cout << "Your roll no is " << rollNo << endl;
    }
};

class Test : virtual public Student {
protected:
    float physics, maths;
public:
    void setMarks(float m1, float m2) {
        physics = m1;
        maths = m2;
    }
    void printMarks() {
        cout << "Your marks in Physics are " << physics << " & in Maths are " << maths << endl;
    }
};

class Sports : virtual public Student {
protected:
    float score;
public:
    void setScore(float scr) {
        score = scr;
    }
    void printScore() {
        cout << "Your P.T score is " << score << endl;
    }
};

class Result : public Test, public Sports {
private:
    float total;
public:
    void display() {
        total = maths + physics + score;
        printNo();
        printMarks();
        printScore();
        cout << "Your total score % is: " << total / 3 << endl;
    }
};

int main()
{
    Result ajResult;
    ajResult.setNo(191883);
    ajResult.setMarks(95, 96);
    ajResult.setScore(92);
    ajResult.display();

    return 0;
}