#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
    void set_data(int r, int i){
        real = r;
        imaginary = i;
    }
    void get_data(void){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }
};

int main(){
    complex c1;
    complex *ptr = &c1;
    //(*ptr).set_data(2,8); this exactly same as that
    ptr->set_data(2,8);
    //(*ptr).get_data(); this exactly same as that
    ptr->get_data();
return 0;
}