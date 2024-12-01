#include<iostream>
#include<math.h>
using namespace std;

class parameter{
    protected:
    int a;
    int b;
    public:
    void set_data(int a, int b){
        this->a = a;
        this->b = b;
    }
};

class simple_Cal:public parameter{
  public:
  void displaySimple(){
    cout<<"Sum of a+b = "<<a+b<<endl;
    cout<<"sub of a-b = "<<a-b<<endl;
    cout<<"Multiply of a*b = "<<a*b<<endl;
    cout<<"Division of a/b = "<<a/b<<endl;
    cout<<""<<endl;
  }
};

class scientific_cal:public simple_Cal{
    public:
    void displayScientific(){
    cout<<"The value of sin(a*b) = "<<sin(a*b)<<endl; 
    cout<<"The value of cos(a*b) = "<<cos(a*b)<<endl; 
    cout<<"The value of tan(a*b) = "<<tan(a*b)<<endl; 
    cout<<"The value of cot(a*b) = "<<1/tan(a*b)<<endl; 
       
    }
};

int main(){
    scientific_cal s1;
    s1.set_data(5,2);
    cout<<"Simple calculator :\n"<<endl;
    s1.displaySimple();
    cout<<"Scientific calculator :\n"<<endl;
    s1.displayScientific();
return 0;
}
/*
output
Simple calculator :

Sum of a+b = 7
sub of a-b = 3
Multiply of a*b = 10
Division of a/b = 2

Scientific calculator :

The value of sin(a*b) = -0.544021
The value of cos(a*b) = -0.839072
The value of tan(a*b) = 0.648361
The value of cot(a*b) = 1.54235
*/