#include <iostream>
using namespace std;

class Base
{
    int a;
    int b;

public:
    void set_data(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void divided()
    {
        int c;
        if (b == 0)
        {

            throw "this is not divided by 0";
        }
        c = a / b;
        cout << "c = " << c << endl;
    }
};

int main()
{
    Base b;
    try
    {
        b.set_data(2, 0);
        b.divided();
    }
    catch (const char *e)
    {
        cout << "An Exception an occured " << e << endl;
    }
    return 0;
}