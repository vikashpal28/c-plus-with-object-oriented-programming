#include<iostream>
using namespace std;

class calc{
  private:
  static int v1; 
  static int v2;
  static int v3;
  public:
  // void set_data(int v1, int v2, int v3){
  //   this->v1=v1;
  //   this->v2=v2;
  //   this->v3=v3;
  // } static data member can not take value by this way
  static void show(){
    cout<<"The value of 1 is "<<v1<<endl;
    cout<<"The value of 2 is "<<v2<<endl;
    cout<<"The value of 3 is "<<v3<<endl;
    v1++;
    v2++;
    v3++;
  }
};
int calc :: v1 = 1;
int calc :: v2 = 2;
int calc :: v3 = 3;

int main(){
    calc c1;
    // c1.set_data(1,2,3);
    
    cout<<"function is called through object name:"<<endl;
    c1.show();
    

    cout<<"function is called through class name:"<<endl;
    calc ::show();
    
return 0;
}
/*
output
function is called through object name:
The value of 1 is 1
The value of 2 is 2
The value of 3 is 3
function is called through class name:
The value of 1 is 2
The value of 2 is 3
The value of 3 is 4
*/