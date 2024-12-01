#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll(int a)
    {
        roll_no = a;
    }
    void display_roll(void)
    {
        cout << "Roll number of student = " << roll_no << endl;
    }
};
/*
Note:-Virtual base classes are used in virtual inheritance in a way of
 preventing multiple “instances” of a given class appearing in an 
 inheritance hierarchy when using multiple inheritances.
*/
class Test : virtual public Student
{
protected:
    int maths;
    int physics;
    int chemistry;

public:
    void set_marks(int m, int p, int c)
    {
        maths = m;
        physics = p;
        chemistry = c;
    }
    void display_marks()
    {
        cout << "Your maths score is = " << maths << endl;
        cout << "Your chemistry score is = " << chemistry << endl;
        cout << "Your physics score is = " << physics << endl;
        cout << "Your total of above three subject score is = " << maths + physics + chemistry << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(int s)
    {
        score = s;
    }
    void print_score(void)
    {
        cout << "Your sports score = " << score << endl;
    }
};

class Result : public Sports, public Test
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + chemistry + physics + score;
        display_roll();
        display_marks();
        print_score();
        cout << "Your total score is " << total << endl;
    }
};

int main()
{
    Result R1;
    R1.set_roll(45);
    R1.set_marks(89, 90, 86);
    R1.set_score(89);
    R1.display();

    return 0;
}

/*
output
Roll number of student = 45
Your maths score is = 89
Your chemistry score is = 86
Your physics score is = 90
Your total of above three subject score is = 265
Your sports score = 89
Your total score is 354
*/