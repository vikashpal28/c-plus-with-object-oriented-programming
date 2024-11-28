#include <iostream>
using namespace std;

class base1
{
protected:
    int data1; // this is protected data type so it can direct inherited
public:
    void set_data1(int data1)
    {
        this->data1 = data1;
    }
};

class base2
{
protected:
    int data2; // this is protected data type so it can direct inherited
public:
    void set_data2(int data2)
    {
        this->data2 = data2;
    }
};

/*
Note:-
1. data1 and data2 are two protected data member.
2. after public inheritence then data1 and data2 are protected
3. set_data1 and set_data2 are public member function.
*/
class derived : public base1, public base2
{
public:
    void display()
    {
        cout << "The data1 = " << data1 << endl;
        cout << "The data2 = " << data2 << endl;
        cout << "The sum of data1 + data2 = " << data1 + data2 << endl;
    }
};

int main()
{
    derived vikash;
    vikash.set_data1(28);
    vikash.set_data2(1);
    vikash.display();
    return 0;
}
/*
output
The data1 = 28
The data2 = 1
The sum of data1 + data2 = 29
*/