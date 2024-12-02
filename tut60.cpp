#include<iostream>
#include<fstream>
using namespace std;

/*
The useful classes for working with files in c++ are:
1. fstreambase
2. ifstream -> derived from fstreambase
3. ofstream -> derived from fstreambase
*/

//In order to work with files in c++, you will have to open it. Primarly,
// there are 2 ways to open a file:
//1. using the constructor.
//2. using the member open() of the class.

int main(){
    string st = "Hack code with vikash";
    string str2;
    //open the file usinf constructor and writing it.
    //ofstream out("sample60.txt");//write operations
    //out<<st;
    //open the file usinf constructor and reading it.
    ifstream in("sample60b.txt");//
    //in>>str2; this only print one word
    getline(in,str2);
    cout<<str2<<endl;
    getline(in,str2);
    cout<<str2;
return 0;
}