#include<iostream>
using namespace std;

class base{
    protected:
    int l;
    public:
    base(int n){
        l = n;
    }
    virtual void display(){
        cout<<"this is base class object l = "<<l<<endl;
    }
};
class derived:public base{
    int m;
    public:
    derived(int l, int v ) :base(l){
    m = v;
    }
    virtual void display(){
        cout<<"this is derived class object l = "<<l<<"m"<<m<<endl;
    }
};
void someFunction(base bsobj){
    bsobj.display();
}

int main(){
    base bs(1);
    derived dr(2,3);
    someFunction(bs);
    //bs.display();
    someFunction(dr);
    //dr.display();
return 0;
}
/*
output
this is base class object l = 1
this is base class object l = 2
*/