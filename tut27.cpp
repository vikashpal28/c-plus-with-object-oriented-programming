#include <iostream>
using namespace std;

// forword declaration
class complex;

class calculator
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int realSumComplex(complex, complex);
    int imagSumcomplex(complex, complex);
};

class complex
{
    int a, b;
 friend class calculator;
public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    //individually declaring functions as friends
   // friend int calculator::realSumComplex(complex, complex);
   // friend int calculator::imagSumcomplex(complex, complex);
    //Aliter declaring entire calculator class as friend
    void printNumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};
int calculator::realSumComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
};
int calculator::imagSumcomplex(complex o1, complex o2)
{

    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(1, 9);
    o2.setNumber(2, 0);
    calculator calc;
    int real = calc.realSumComplex(o1, o2);
    cout << "sum of o1 + o2" << " = " << real << endl;
    int imag = calc.imagSumcomplex(o1, o2);
    cout << "sum of o1 + o2" << " = " << imag << "i" << endl;
    return 0;
}
/*
output
sum of o1 + o2 = 3
sum of o1 + o2 = 9i
*/