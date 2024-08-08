// C++ program to demonstrate the execution of constructor
// and destructor

#include <iostream>
using namespace std;
class student{
    private:
    int rn1,rn2;
    string nm1,nm2;
    public:
    student(int rno1, int rno2,string nam1, string nam2){
        rn1 = rno1;
        rn2 = rno2;
        nm1 = nam1;
        nm2 = nam2;
    }
    void show(){
        cout<<"roll number of student-1 : "<<rn1<<endl;
        cout<<"name of student-1 : "<<nm1<<endl;
        cout<<"roll number of student-2 : "<<rn2<<endl;
        cout<<"name of student-2 : "<<nm2<<endl; 
    }
};
int main(){
    student student(1,2,"vikash","jaya");
    student.show();
    return 0;
}
/*
output
roll number of student-1 : 1
name of student-1 : vikash
roll number of student-2 : 2
name of student-2 : jaya
*/