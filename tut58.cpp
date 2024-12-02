#include <iostream>
#include <cstring>
using namespace std;

class HCWV
{
protected:
    char title[30];
    float rating;

public:
    HCWV(char *s, float r)
    {
        strcpy(title, s);
        rating = r;
    }
    virtual void display() = 0;//do nothing function which called as pure vvirtual function.
};

class HCWV_Video : public HCWV
{
protected:
    float videolength;

public:
    HCWV_Video(char *s, float r, float vl) : HCWV(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "Your video tiltle = " << title << endl;
        cout << "Your video rating = " << rating << endl;
        cout << "Your video length = " << videolength << endl;
    }
};

class HCWV_Text : public HCWV
{
protected:
    int words;

public:
    HCWV_Text(char *s, float r, int w) : HCWV(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "Your Text tiltle = " << title << endl;
        cout << "Your Text rating = " << rating << endl;
        cout << "Your Text length = " << words << endl;
    }
};

int main()
{
    char *title = new char[30];
    float rating, vlen;
    int words;

    // for videos
    title = "oop's is the best";
    vlen = 4.56;
    rating = 4.89;
    HCWV_Video c_video(title, rating, vlen);
    // c_video.display();

    // for text
    title = "oop's contain is best";
    words = 400;
    rating = 4.89;
    HCWV_Text c_Text(title, rating, words);
    // c_Text.display();

    HCWV *tuts[2];
    tuts[0] = &c_video;
    tuts[1] = &c_Text;

    tuts[0]->display();
    cout << endl;
    tuts[1]->display();

    return 0;
}
/*
output
Your video tiltle = oop's is the best
Your video rating = 4.89
Your video length = 4.56

Your Text tiltle = oop's contain is best
Your Text rating = 4.89
Your Text length = 400
*/