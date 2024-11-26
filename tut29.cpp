#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(void);//creating constructor
    //constructor is a special member function that of same name of class.
    //it is used to intialise the object of the class
    //it is automatically invoked whenever the object is created
    void printNumber(void){
        cout<<"your number is "<<" = "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex::complex(void){ // default constructor
    a = 10;
    b = 9;

}

int main(){
    complex c1;
    c1.printNumber();
return 0;
}
/*
properties of constructor:-

1.it should be declared in the public section of class.
2.it is automatically invoked whenever the object is created.
3.they  do no have return value and do  not have return types.
4.it can have default arguments.
5.we can not refer to their address.
*/