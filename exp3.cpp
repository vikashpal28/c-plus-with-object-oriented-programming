//operators
#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cout<<"enter the number1:\n";
    cin>>a;
    cout<<"enter the number2:\n";
    cin>>b;
    //arithmetic operators
    cout<<a+b<<"\n";
    cout<<a-b<<"\n";
    cout<<a*b<<"\n";
    cout<<a/b<<"\n";
    cout<<a%b<<"\n";
    //increment operators
    cout<<(a++ + b++)<<"\n";
    cout<<(++a - ++b)<<"\n";
    cout<<(a++)<<"\n";
    cout<<(++a)<<"\n";
    cout<<(b++)<<"\n";
    cout<<(++b)<<"\n";
    //decrement operators
     cout<<(a-- + b--)<<"\n";
    cout<<(--a + --b)<<"\n";
    cout<<(a--)<<"\n";
    cout<<(--a)<<"\n";
    cout<<(b--)<<"\n";
    cout<<(--b)<<"\n";
    //asignment operators
    cout<<(a=b)<<"\n";
    //logical operators
    cout<<(a==b)<<"\n";
    cout<<(a!=b)<<"\n";
    return 0;
}
