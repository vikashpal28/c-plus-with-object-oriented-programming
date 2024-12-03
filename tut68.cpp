#include<iostream>
using namespace std;

template<class T1>
class vikash{
    public:
    T1 data;
    vikash(T1 a){
        data = a;
    }
    void display();
};

template< class T1>
void vikash<T1> :: display(){
    cout<<data<<endl;
}

void func(int a){
    cout<<"this is fisrt func() "<<a<<endl;
}

template<class T>
void func(T a){
cout<<"this is templatised func() "<<a<<endl;
}

int main(){
    // vikash<float>v1(2.90);
    // cout<<v1.data<<endl;
    // v1.display();
   func(3);//similar data type has highest priority in template.
   //extact match get the priority.
return 0;
}