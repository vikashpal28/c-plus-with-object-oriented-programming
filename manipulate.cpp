#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a =1,b=23,c=0103;
    cout<<"without set value of a = "<<a<<endl;
    cout<<"without set value of  b = "<<b<<endl;
    cout<<"without set value of  c = "<<c<<endl;
    //by manipulate means that it maintain space around digit that i want to maintain
    cout<<"value of a = "<<setw(4)<<a<<endl;
    cout<<"value of b = "<<setw(4)<<b<<endl;
    cout<<"value of c = "<<setw(4)<<c<<endl;

    return 0;
}
/*
output
without set value of a = 1
without set value of  b = 23
without set value of  c = 67
value of a =    1
value of b =   23
value of c =   67
*/