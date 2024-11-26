#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int , int);//parameterised constructor that takes two parameter
    void printNumber(void){
        cout<<"your number is "<<" = "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex::complex(int x,int y){
    a = x;
    b = y;
}

int main(){
    //explicit call
    complex c1(7,8);
    c1.printNumber();
    //implicit call
    complex c2 = complex(2,5);
    c2.printNumber();
return 0;
}
/*
output
your number is  = 7+8i
your number is  = 2+5i
*/