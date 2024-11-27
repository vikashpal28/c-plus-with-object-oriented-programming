#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    //constructor overloading is similar to function overloading.
    complex(){
        a = 0;
        b = 0;
    }
    complex(int x , int y){
        a = x;
        b = y;
    }
    complex(int x){
        a = x;
        b = 0;
    }
    void printNumber(){
        cout<<"Your number is "<<" = "<<a<<"+"<<b<<"i"<<endl;
    }
};

int main(){
    complex c1(7,8);
  c1.printNumber();
  complex c2(9);
  c2.printNumber();
  complex c3;
  c3.printNumber();
return 0;
}
/*
output
Your number is  = 7+8i
Your number is  = 9+0i
Your number is  = 0+0i
*/