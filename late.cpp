#include<iostream>
using namespace std;

class baseA{
    public:
    void display(void){
        cout<<"Base class-A"<<endl;
    }
};

class derivedB:public baseA{
    public:
    void display(){
        cout<<"Derived class-B"<<endl;
    }
};

class derivedC : public derivedB{
    public:
     void display(){
        cout<<"Derived class-C"<<endl;
    }
};

int main(){
    baseA objA;
    derivedB objB;
    derivedC objC;
    baseA * ptr[3];//define an array pointor to baseA
    ptr[0] = &objA;
    ptr[1] = &objB;
    ptr[2] = &objC;

    for(int i =0;i<3;i++){
        ptr[i]->display();
    }
    

    objA.display();
    objB.display();
    objC.display();
return 0;
}
/*
output
Base class-A
Base class-A
Base class-A
Base class-A
Derived class-B
Derived class-C
*/