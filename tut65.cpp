#include<iostream>
using namespace std;

/*
Template with two or more parameter

Syntax:-

template <class T1, class T2>
*/

template<class T1, class T2>
class myclass{
    public:
    T1 data1;
    T2 data2;

    void display(){
        cout<<this->data1<<endl<<this->data2<<endl;
    }
};

int main(){
    myclass <int , string>b1;
    b1.data1 = 24;
    b1.data2 = "vikash pal";
    b1.display();

return 0;
}