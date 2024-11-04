#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int main(){
    int x = 2, y = 4;
    cout<<"the value of a = "<<x<<" the value of b = "<<y<<endl;
    swap(&x,&y);
    cout<<"the value of a = "<<x<<" the value of b = "<<y<<endl;
return 0;
}

