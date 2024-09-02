#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int n,rev=0,num,remain,c=0;
    cout<<"enter only five digit number:\n";
    cin>>n;
    num = n;
    while(n!=0){
        remain=n%10;
        rev = rev*10+remain;
       n = n/10;
         c++;//c check the digit of number
    }
    if(c!=5){//if digit is not equal to 5 then it print invalid output
        cout<<"invalid\n";
        exit(0);
    }
    if(num==rev){
    cout<<"this is palindrome\n";
    }
    else{
        cout<<"this is not palindrome\n";
    }
    return 0;
}
/*
output
enter only five digit number:
12321
this is palindrome
*/