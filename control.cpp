#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    //selection control structures in if-else
    if(age<18){
        cout<<"you can come on my party"<<endl;
    }
    else if(age == 18){
        cout<<"you can come on party with child pass"<<endl;
    }
    else{
        cout<<"all allowed on my party"<<endl;
    }
    //selection control structure in if-else
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 17:
    cout<<"you are 17"<<endl;
    break;
    
    default:
    cout<<"no input special character"<<endl;
        break;
    }

    return 0;
}
/*
output
tell me your age
17
you can come on my party
you are 17
*/