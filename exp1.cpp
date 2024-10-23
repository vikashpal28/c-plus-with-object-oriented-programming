#include<iostream>
using namespace std;
int glob = 6;// it is global variable 
void sum(){// create function
    //first it check it has local variable then it go to global variable
    cout<<glob<<"\n";
}
int main(){
    //it is global variable
    int glo = 9;
    glo = 89;
    sum();// calling function
    cout<<glo<<"\n";
    return 0;
}
/*
output
6
89
*/