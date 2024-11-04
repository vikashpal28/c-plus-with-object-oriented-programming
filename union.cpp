#include<iostream>
using namespace std;

union money{
    int rice;
    char wheat;
    float pounds;
};

int main(){
    union money m1;
    m1.rice = 01;
    
    m1.wheat = 'j';
cout<<m1.rice<<endl;
cout<<m1.wheat<<endl;

return 0;
}

