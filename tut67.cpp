#include<iostream>
using namespace std;

template <class T1, class T2>
float avg_function(T1 a, T2 b){
    float avg = (a+b)/2;
    return avg;
}

int main(){
    float a = avg_function(2.0,12.908);
    cout<<"The avg of two number is "<<a<<endl;
return 0;
}