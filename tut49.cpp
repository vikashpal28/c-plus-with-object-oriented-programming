#include<iostream>
using namespace std;

class Test{
    public:
    int a;
    int b;
    Test(int i, int j):a(i),b(j)
    //Test(int i, int j):a(i),b(i+j)
    //Test(int i, int j):a(i),b(a+j)
    //Test(int i, int j):b(j),a(i + b)
    {
        cout<<"constructor was called"<<endl;
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main(){
    Test T1(2,9);
return 0;
}