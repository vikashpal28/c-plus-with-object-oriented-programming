#include<iostream>
using namespace std;
//how to pass object as array
class employee{
    int id;
    int salary;
    public:
    void setter(void){
        salary = 155;
        cout<<"enter the id of the employee:"<<endl;
        cin>>id;
    }
    void getter(void){
        cout<<"employee salary "<<"= "<<id<<endl;
        cout<<"employee salary "<<"= "<<salary<<endl;
        
    }
};
int main(){
    employee mitrc[4];
    int i;
    for(i=0;i<4;i++){
        mitrc[i].setter();
        mitrc[i].getter();
    }
    return 0;
}
/*
output
enter the id of the employee:
1
employee salary = 1
employee salary = 155
enter the id of the employee:
2
employee salary = 2
employee salary = 155
enter the id of the employee:
3
employee salary = 3
employee salary = 155
enter the id of the employee:
4
employee salary = 4
employee salary = 155

*/