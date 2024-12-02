#include <iostream>
using namespace std;

class Base
{
public:
    int a = 1;
    void set_base_data(int a)
    {
        this->a = a;
    }
    virtual void display()
    {
        cout << "1 This is base class and a = " << a << endl;
    }
};
class derived : public Base
{
public:
    int a = 28;
    void set_derived_data(int a)
    {
        this->a = a;
    }
    void display()
    {
        cout << "2 This is base class and a = " << a << endl;
        cout << "2 This is derived class and a = " << a << endl;
    }
};

int main()
{
    Base *obj_Base_pointor;
    Base obj_base;
    derived obj_derived;
    obj_Base_pointor = &obj_derived;
    obj_Base_pointor->display();

    return 0;
}
/*
ouput
2 This is base class and a = 28
2 This is derived class and a = 28
*/