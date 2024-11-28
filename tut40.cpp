#include <iostream>
using namespace std;

class student
{
protected:
    int rollNumber;

public:
    void set_rollNumber(int);
    void get_rollNumber(void);
};

void student ::set_rollNumber(int r)
{
    rollNumber = r;
}

void student ::get_rollNumber()
{
    cout << "The Roll-Number is " << rollNumber << endl;
}

class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam ::set_marks(float maths, float physics)
{
    this->maths = maths;
    this->physics = physics;
}

void Exam ::get_marks()
{
    cout << "Your maths score = " << maths << endl;
    cout << "Your physics score = " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        percentage = (maths + physics) / 2;
        get_rollNumber();
        get_marks();
        cout << "Your percentage is " << percentage << "%" << endl;
    }
};

int main()
{
    Result vikash;
    vikash.set_rollNumber(2310117);
    vikash.set_marks(98, 90);
    vikash.display();

    return 0;
}
/*
output
The Roll-Number is 2310117
Your maths score = 98
Your physics score = 90
Your percentage is 94%
*/

/*
notes:-
1.A->B->C this is inheritence path.
2.A is a base class for B , B is a base class for C and C is derived class.
*/