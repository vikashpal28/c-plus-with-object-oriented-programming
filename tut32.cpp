#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    int data3;
    public:
    //constructor with default values
    simple(int a, int b = 9, int c = 1){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printNumber();
};
 void simple :: printNumber(){
    cout<<"your simple data1 = "<< data1<<" , "<<"data2 = "<< data2<<" and "<<"data3 = "<<data3<<endl; 
 }

int main(){
    simple s1(1,5);
    s1.printNumber();
return 0;
}
/*
output
your simple data1 = 1 , data2 = 5 and data3 = 1
*/