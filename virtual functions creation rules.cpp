#include<iostream>

using namespace std;

class CWH {
protected:
    string title;
    float rating;
public:
    CWH(string s, float r) {
        title = s;
        rating = r;
    }

    virtual void display() {

    }
};

class CWHVideo : public CWH {
    float videoLength;
public:
    CWHVideo(string s, float r, float vl) : CWH(s, r) {
        videoLength = vl;
    }

    void display() {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << "  minutes" << endl;
    }
};

class CWHText : public CWH {
    int words;
public:
    CWHText(string s, float r, float wc) : CWH(s, r) {
        words = wc;
    }

    void display() {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "No. of words in this text tutorial: " << words << "  words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for CWH video
    title = "Django Tutorial";
    vlen = 4.56;
    rating = 4.98;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // for CWH text
    title = "Django Tutorial Text";
    words = 433;
    rating = 4.18;
    CWHText djText(title, rating, words);
    // djText.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

// Rules for virtual functions
// They cannot be static
// They are accessed by object pointer
// Virtual functions can be a friend of another class
// A virtual function in base class might not be used
// If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class