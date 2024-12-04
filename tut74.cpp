#include<iostream>
#include<algorithm>
using namespace std;

int main(){
//function object (functor):- Function wrapped in a class so that it availabe like an object.
int arr[] ={1,9,0,7,5,2};
sort(arr,arr+6,greater<int>());
for (int i = 0; i < 6; i++)
{
    cout<<arr[i]<<" ";
}


return 0;
}