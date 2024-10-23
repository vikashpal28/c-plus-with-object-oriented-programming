#include<iostream>
using namespace std;
int glob = 45;
int main(){
    int glob,a,b;
    cout<<"enter the number1:\n";
    cin>>a;
    cout<<"enter the number2:\n";
    cin>>b;
    glob = a+b;
    cout<<"sum of a+b = "<<glob<<"\n";
    cout<<"global variable = "<<::glob;
    return 0;
}
/*
output
enter the number1:
1
enter the number2:
2
sum of a+b = 3
global variable = 45
*/