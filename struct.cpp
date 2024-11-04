#include<iostream>
using namespace std;
typedef struct employer{
    int id;
    char favchar;
    float salary;
} emp;

int main(){
emp vikash;
vikash.id = 123;
vikash.favchar ='j';
vikash.salary = 1500000;
cout<<vikash.id<<endl;
cout<<vikash.favchar<<endl;
cout<<vikash.salary<<endl;


return 0;
}

