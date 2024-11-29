#include<iostream>
using namespace std;

class calculation{
     protected:
     int a,b,operators_para, result;
     public:
     void operators(int , int);
     void display();
};

void calculation ::operators(int a, int b){
    cout<<"enter the operator 1 = +, 2 = -, 3 = * and 4 = / "<<endl;
    cin>>operators_para;
    switch(operators_para)
    {
    case 1 : 
    result = a+b;
    break;
    case 2 : 
    result = a-b;
    break;
    case 3 : 
    result = a*b;
    break;
    case 4: 
    result = a/b;
    break;
    default:
    cout<<"wrong input"<<endl;
        break;
    }
}
void calculation ::display(){
    cout<<"Your ansewer is"<<" = "<<result<<endl;
}

int main(){
    calculation c1;
    c1.operators(10,5);
    c1.display();
return 0;
}