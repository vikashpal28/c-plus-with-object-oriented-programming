#include<iostream>
using namespace std;

int main(){
  int a = 5;
  int *ptr = &a;

  cout<<"The value of a = "<<a<<endl;
  cout<<"The value of a = "<<*ptr<<endl;
  cout<<"The value of a = "<<*(&a)<<endl;
  cout<<"The address of a = "<<&a<<endl;
  cout<<"The address of a = "<<&(*ptr)<<endl;
  cout<<"The address of a = "<<ptr<<endl;

  float *p = new float(40.78);
  cout<<"The value at address of p = "<<*p<<endl;
  

  //new operator
  int *arr = new int(3);
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;
  int i;
  delete[] arr;
  for(i=0;i<3;i++){
    cout<<" arr "<<i<<" = "<<arr[i]<<endl;
  }

  //delete operator

return 0;
}