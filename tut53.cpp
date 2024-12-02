#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A & set_data(int a){
      this->a = a;
      return *this;
    }
    void get_data(void){
        cout<<"a = "<<a<<endl;
    }
};
int main(){
    A a;
    a.set_data(4).get_data();
   // a.get_data();
return 0;
}