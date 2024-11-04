#include<iostream>
using namespace std;

int main(){
    //pointer
    int a = 28;
    int * b = &a;
    cout<<"the value of a = "<<a<<endl;
    cout<<"the value of a = "<<*b<<endl;

    cout<<"the address of a = "<<&a<<endl;
    cout<<"the address of a = "<<b<<endl;
return 0;
}

