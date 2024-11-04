#include<iostream>
using namespace std;
class employer{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a,int b,int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void getdata(){
        cout<<"the value of a = "<<a<<endl;
        cout<<"the value of b = "<<b<<endl;
        cout<<"the value of c = "<<c<<endl;
        cout<<"the value of d = "<<d<<endl;
        cout<<"the value of e = "<<e<<endl;
    }
};

int main(){
    employer emp1;
    emp1.d = 28;
    emp1.e = 01;
    emp1.setdata(1,2,3);
    emp1.getdata();
return 0;
}
//note:- private data type can not be access directly in c++
//but we access by function call setdata in class.
//note :- public access modifier can be access directly in
//main object
/*
output
the value of a = 1
the value of b = 2
the value of c = 3
the value of d = 28
the value of e = 1
*/

