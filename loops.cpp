#include<iostream>
using namespace std;
int main(){
    //for loop
    //syntax of for loop
    //for(intialize;condition;updation){
    // printf(c++)
    // }
    int i=0;
    for(i=1;i<=10;i++){
    cout<<i<<endl;
    }
    // //while loop
    // //syntax
    // //while(condition){
    // //c++ code
    // //}
    while(i!=10){
         cout<<i<<endl;
         i++;
    }
    // //d-while loop
    do{
        cout<<i<<endl;
        i++;
    }while(i<10);
    int j =1;

    do{
        cout<<"6"<<"*"<<j<<"="<<6*j<<endl;
        j++;
    }while(j<=10);
    return 0;
}