#include<iostream>
using namespace std;
//class defination
class student{
    int roln;
    char name[20];
    double fee;
    public:
    /*
    Here we will define a constructor
    inside the same class for which
    we are creating it.
    */
    student(){
        //constructor within the class
        cout<<"enter the name"<<"\n";
        cin>>name;
        cout<<"enter the roll number"<<"\n";
        cin>>roln;
        cout<<"enter the fee"<<"\n";
        cin>>fee;
}
// Function to display the data
    // defined via constructor
    void display(){
        cout<<name<<"\n"<<roln<<"\n"<<fee<<endl;
    }

};
int main(){
    student s1;
    /*
    constructor gets called automatically
    as soon as the object of the class is declared
    */
    s1.display();
    return 0;
}
/*
output
enter the name
vikash
enter the roll number
23
enter the fee
2000
vikash
23
2000
*/