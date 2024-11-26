#include <iostream>
using namespace std;

class c2;

class c1
{
    int v1;

public:
    void setdata(int a)
    {
        v1 = a;
    }
    void display(void)
    {
        cout << v1 << endl;
    }
    friend void exchange(c1 &, c2 &);
};

class c2
{
    int v2;

public:
    void setdata(int b)
    {
        v2 = b;
    }
    void display(void)
    {
        cout << v2 << endl;
    }
    friend void exchange(c1 &, c2 &);
};

void exchange(c1 &x, c2 &y)
{
    int t = x.v1;
    x.v1 = y.v2;
    y.v2 = t;
}

int main()
{
    c1 o1;
    o1.setdata(89);
    c2 o2;
    o2.setdata(20);
    exchange(o1, o2);
    cout << "after exchanging c1 " << " = ";
    o1.display();
    cout << "after exchanging c2 " << " = ";
    o2.display();

    return 0;
}