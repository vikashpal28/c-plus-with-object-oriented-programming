#include<iostream>
#include<string>
using namespace std;
class teacher{
    private: 
    double salary;
    public:
    string name;
    string subject;
    string dept;
    void changedept(string newdept){
        dept = newdept;
    }
    //setter
    void setsalary(double s){
        salary=s;
    }
    //getter
    double getsalary(){
        return salary;
    }
};
class student{
    public:
    string name;
    int roln;

};
int main(){
    teacher t1;
    t1.name="vikash";
    t1.subject="c++";
    t1.dept ="computer science";
    t1.setsalary(25000);
    cout<<t1.name<<endl;
    cout<<t1.getsalary()<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.subject<<endl;

    teacher t2;
    t2.name="jaya";
    t2.subject="chemistry";
    t2.dept ="chemical department";
    t2.setsalary(45000);
    cout<<t2.name<<endl;
    cout<<t2.getsalary()<<endl;
    cout<<t2.dept<<endl;
    cout<<t2.subject<<endl;
    
    //student information
    student s1;
    s1.name ="vinay";
    s1.roln = 23;
    cout<<s1.name<<endl;
    cout<<s1.roln<<endl;
return 0;

}
/*
output 
vikash
25000
computer science
c++
jaya
45000
chemical department
chemistry
vinay
23*/