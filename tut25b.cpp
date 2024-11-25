#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setdata(int v1,int v2){
        a = v1;
        b = v2;
    }
    void setBySumdata(complex o1, complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printSumdata(){
        cout<<"your complex number is "<<"= "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.printSumdata();

    c2.setdata(7,2);
    c2.printSumdata();

    c3.setdata(9,2);
    c3.printSumdata();

    return 0;
}
/*
output
your complex number is = 1+2i
your complex number is = 7+2i
your complex number is = 9+2i

*/