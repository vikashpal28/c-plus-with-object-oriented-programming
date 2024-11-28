#include<iostream>
using namespace std;

class A{
    public:
    int id;
    A(){}//default constructor
    A(int id){//constructor with parameter
        this->id = id;
    }
    void show(){
        cout<<"id of A = "<<id<<endl;
    }
};

class B : A{
    private:
    float salary = 32;
    public:
    B(){
    id = 10;
    }
    void show(){
        cout<<"id of A = "<<id<<endl;
        cout<<"salary of A = "<<salary<<endl;
    }
};

int main(){
    A a1 = A(2);
    a1.show();
    B b1;
    b1.show();
return 0;
}