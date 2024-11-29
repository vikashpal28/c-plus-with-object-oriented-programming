#include <iostream>
using namespace std;

class base1
{
public:
    void ambiguity()
    {
        cout << "how are you" << endl;
    }
};

class base2
{
public:
    void ambiguity()
    {
        cout << "kaise ho app" << endl;
    }
};

class derived : public base1, public base2
{
    int a;

public:
    void ambiguity()
    {
        base1 ::ambiguity();
    }
};

int main()
{
    base1 base1obj;
    base1obj.ambiguity();
    base2 base2obj;
    base2obj.ambiguity();
    derived d1;
    d1.ambiguity();
    return 0;
}
/*
ouput
how are you
kaise ho app
how are you
*/

