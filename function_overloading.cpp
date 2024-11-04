#include<iostream>
using namespace std;
int sum(int a, int b)
{
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}
//note:- In function overloading means is that we can load a 
//function with many no of variable ort different data type.

int sum(int a, int b,int c){
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}
int main(){
    cout<<"sum of 2 and 5 = "<<sum(2,5)<<endl;
    cout<<"sum of 2,3 and 4 = "<<sum(2,3,5)<<endl;
return 0;
}
/*
output
using function with 2 arguments
sum of 2 and 5 = 7
using function with 3 arguments
sum of 2,3 and 4 = 10
*/
