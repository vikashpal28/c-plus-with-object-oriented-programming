#include<iostream>
using namespace std;

class Base{
    public:
    int a;
    void set_base_data(int a){
     this->a = a;
    }
    void display(){
        cout<<"This is base class and a = "<<a<<endl;
    }
};
class derived : public Base{
    public:
    int a;
    void set_derived_data(int a){
        this->a = a;
    }
    void display(){
        cout<<"This is base class and a = "<<a<<endl; 
         cout<<"This is derived class and a = "<<a<<endl;
    }
};

int main(){
    Base *base_class;
    Base Base_obj;
    derived derived_obj;
    base_class = &derived_obj;
    base_class->set_base_data(34);
    base_class->display();
   // derived_obj.set_derived_data(89);
    //derived_obj.display();
return 0;
}