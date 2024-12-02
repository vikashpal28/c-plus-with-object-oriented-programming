#include<iostream>
#include<fstream>
using namespace std;

int main(){
 ofstream out;
 out.open("sample60.txt");
 out<<"this is me\n";
 out<<"Hack code with vikash";
 out.close();

string str;
 ifstream in;
 in.open("sample60.txt");
 while(in.eof()==0){
 getline(in,str);
 cout<<str<<endl;
 }
return 0;
}