#include<iostream>
using namespace std;
class employee{
    int id;
     static int count;
     //if do not create static key word then setdata function has own individual value 
     //after create static keyword it start form 0 then objects increases and count varibale also increase.
    public:
    void setdata(void){
    cout<<"enter the id"<<endl;
    cin>>id;
    count++;
    }
    void getdata(void){
        cout<<"the id of employee "<<"= "<<id<<" and the employee number "<<"= "<<count<<endl;
    }
};
 int employee:: count; //default value of count = 0
int main(){
    employee harray,vikash,jaya;
    harray.setdata();
    harray.getdata();
    vikash.setdata();
    vikash.getdata();
    jaya.setdata();
    jaya.getdata();
    return 0;

}