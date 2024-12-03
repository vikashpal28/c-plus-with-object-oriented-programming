#include<iostream>
using namespace std;

template<class T1 = int , class T2 = float>
class vikash{
    public:
    T1 age;
    T2 weight;
    vikash(T1 a, T2 w){
        age = a;
        weight = w;
    }
    void display(void){
        cout<<"My age is "<<age<<endl;
        cout<<"My body weight is "<<weight<<endl;
    }
};

int main(){
    vikash v1(20,49.5);
    v1.display();
return 0;
}