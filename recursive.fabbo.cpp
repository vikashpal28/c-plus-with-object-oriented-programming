#include<iostream>
using namespace std;
int fabbo(int n){
    if(n<=2){
        return 1;
    }
    return fabbo(n-2)+fabbo(n-1);
}
int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    cout<<"fabbonacci = "<<fabbo(n)<<endl;
return 0;
}

