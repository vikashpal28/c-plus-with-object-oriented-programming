#include<iostream>
using namespace std;

class demo{
  public:
   int ambiguity(int a){
    cout<<"a"<<" = "<<a<<endl;
  }
   int ambiguity(char a){
    cout<<"a"<<" = "<<a<<endl;
  }
  int ambiguity(int a,int b){
    cout<<"a"<<" = "<<a<<endl<<"b"<<" = "<<b<<endl;
  }
  
};

int main(){
    demo d;
    d.ambiguity(8);
    d.ambiguity('a');
    d.ambiguity(28,03);
return 0;
}
/*
output
a = 8
Illegal instruction (core dumped)

here the compiler get confused because of different data type is used the ambiguity occured.
*/