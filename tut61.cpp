#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string name;
    ofstream out("sample60.txt");
    cout<<"enter the name"<<endl;
    cin>>name;
    out<<"my name is "+name;
    out.close();

 ifstream in("sample60.txt");
 string content;
 //in>>content;
 getline(in,content);
 cout<<"The content of the file : "<<content;
 in.close();
return 0;
}