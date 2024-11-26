#include <iostream>
using namespace std;

class y;

class x
{
    int data;
   

public:
    void setdata(int value)
    {
        data = value;
    }
     friend void sum(x, y);
};
class y
{
    int data;
   

public:
    void setdata(int value)
    {
        data = value;
    }
     friend void sum(x, y);
};

void sum(x o1, y o2)
{
    cout << "summing of data x and y " << " = " << o1.data + o2.data << endl;
}

int main()
{
    x a1;
    a1.setdata(4);
    y b1;
    b1.setdata(7);
    sum(a1,b1);
    return 0;
}
/*
ouput
summing of data x and y  = 11
*/