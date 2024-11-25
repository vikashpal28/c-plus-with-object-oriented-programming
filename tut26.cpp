#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setNumber(int v1, int v2){
        a = v1;
        b = v2;
    }
    //with the help of friend keyword we can your private data type end of the class
   friend complex sumcomplex(complex o1, complex o2);
   //this is non-member function that allowed to use private data member outside of class.
    void printNumber(){
        cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o1.b));
    return o3;
}
int main(){
    complex c1,c2,sum;
    c1.setNumber(2,9);
    c2.setNumber(8,7);
    c1.printNumber();
    c2.printNumber();
    sum = sumcomplex(c1,c2);
    sum.printNumber();
    return 0;
}
/*
output
your number is 2+9i
your number is 8+7i
your number is 10+18i


properties of friend keywords:-
1. not in the scope of class.
2. since it is not in the scope of class, it cannot be called from the object of that class.
c1.sumNumber() == invalid
3. can be invoked without any help of object.
4. usually contain the object as argument.
5. can be use inside private or public section of the class.
6. it can be access directy data member of the class by their names and need obect_name.member_name to access any member.
*/