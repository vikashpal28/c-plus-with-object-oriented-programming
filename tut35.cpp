#include<iostream>
using namespace std;
int count = 0;
class num{
    public:
    num(){
        count++;
        cout<<"this is the time where my constructor is called for an object number "<<count<<endl;
    }
    //destructor does not takes arguments and never takes return value.
     ~num(){
        cout<<"thsi is the time where my destructor is called for an object number "<<count<<endl;
        count--;
    }
};

int main(){
    cout<<"We are inside the main function"<<endl;
    cout<<"Creating the first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more object"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main menu"<<endl;
return 0;
}
/*
output
We are inside the main function
Creating the first object n1
this is the time where my constructor is called for an object number 1
Entering this block
Creating two more object
this is the time where my constructor is called for an object number 2
this is the time where my constructor is called for an object number 3
Exiting this block
thsi is the time where my destructor is called for an object number 3
thsi is the time where my destructor is called for an object number 2
Back to main menu
thsi is the time where my destructor is called for an object number 1
*/