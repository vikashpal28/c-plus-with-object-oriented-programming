#include<iostream>
using namespace std;

/*
For protected member
                           Public derivation           Private derivation              Protected derivation        
1. Private member          not inherited               not inherited                   not inherietd
2. Protected member        protected                   private                         protected
3. Public member           public                      private                         protected
*/

class base{
    protected:
    int a;
    private:
    int b;
};

class derived : protected base{
    public:
    void show();
};

void derived ::show(){
  a = 5;
  cout<<"a"<<" = "<<a<<endl;
  
}

int main(){
    derived d1;
    //cout<<d1.a<<endl; will not work since a is protected in both as well as derived class
    d1.show();
return 0;
}