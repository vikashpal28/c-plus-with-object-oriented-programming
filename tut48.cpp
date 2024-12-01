#include<iostream>
using namespace std;
/*
case 1:-
class A: public B{
  order of excecution of constructor -> B() -> A()
}

case 2:-
class A: public B, public C{
order of execution of constructor -> B() -> C() -> A() 
}

case 3:-
class A: public B, virtual public C{
order of execution of constructor -> C() -> B() -> A()
}

*/

class Base1{
    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout<<"Base1 constructor invoked"<<endl;
    }
    void print_data1(void){
        cout<<"The data1 = "<<data1<<endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
    cout<<"Base2 constructor invoked"<<endl;
    }
    void print_data2(void){
        cout<<"The data1 = "<<data2<<endl;
    }
};

class derived : public Base1, public Base2{
    int d1,d2;
    public:
    derived(int a,int b, int c, int d):Base1(a),Base2(b){
          d1 = c;
          d2 = d;
    cout<<"derived constructor invoked"<<endl;
    }
    void print_data(void){
        cout<<"The d1 = "<<d1<<endl;
        cout<<"The d1 = "<<d2<<endl;
    }
    
};

int main(){
  derived vikas(1,2,3,4);
  vikas.print_data1();
   vikas.print_data2();
   vikas.print_data();

return 0;
}
/*
output
Base1 constructor invoked
Base2 constructor invoked
derived constructor invoked
The data1 = 1
The data1 = 2
The d1 = 3
The d1 = 4
*/