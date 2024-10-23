#include<iostream>
using namespace std;
int main(){
    int x = 25;
    int &y = x;
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}
/*
output
25
25
*/