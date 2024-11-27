#include<iostream>
using namespace std;

class Number{
    int data;
    public:
    Number(){
        data = 0;
    }
    Number(int a){
        data = a;
    }
    //when no copy constructor is found then compiler supply its own copy constructor
    Number(Number &obj){
        cout<<"copy constructor called!!"<<endl;
        data = obj.data;
    }
    void show(){
        cout<<"the number for this object is "<<data<<endl;
    }
};

int main(){
    Number n1,n2,n3(90),n4;
    n1.show();
    n2.show();
    n3.show();
    Number z1(n2);//copy constructor invoked
    z1.show();
    n4 = n3;//copy constructor not invoked
    n4.show();
     Number n5 = n3;//copy constructor invoked because we separately from object
     n5.show();

return 0;
}