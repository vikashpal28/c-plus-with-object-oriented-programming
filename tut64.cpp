#include<iostream>
using namespace std;

template <class T>
class vector{
    public:
    T *arr;
    int size;
    vector(int m){
        size = m;
        arr = new T[size];
    }
    T dot_poduct(vector &v){
        T d = 0;
     for(int i = 0;i<size;i++){
        
         d += this->arr[i]*v.arr[i];
     }
     return d;
    }
};

int main(){
    vector <float>v1(3);
   // vector v1(3);
    v1.arr[0] = 1.3;
    v1.arr[1] = 2.8;
    v1.arr[2] = 3.29;

   // vector v2(3);
   vector <float>v2(3);
    v2.arr[0] = 1.9;
    v2.arr[1] = 2.78;
    v2.arr[2] = 3.09;
   float a = v1.dot_poduct(v2);
   cout<<"Dot porduct of v1 and v2 = "<<a<<endl;
return 0;
}
/*
output
Dot porduct of v1 and v2 = 20.4201
*/