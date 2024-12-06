#include<iostream>
using namespace std;

class base{
    public:
    virtual void show() = 0;
};

class derived:public base{
  public:
  void show(){
    cout<<"implement of derived class"<<endl;
  }
};

int main(){
    base *base_obj;
    // base b;
    // b.show();
    derived d;
    base_obj = &d;
    base_obj->show();
return 0;
}
/*
output
implement of derived class
*/