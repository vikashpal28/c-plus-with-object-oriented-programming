#include<iostream>
#include<cstdlib>
using namespace std;

class binary{

    string s;
    void check_bin(void);
    public:
    void read(void);
    void ones(void);
    void display(void);
};
void binary :: read(void){
    cout<<"enter the binary number:"<<endl;
    cin>>s;
}
void binary :: check_bin(void){
    int i;
    for(i = 0;i<s.length();i++){
        if(s.at(i)!='0'&&s.at(i)!='1'){
            cout<<"wrong input and it is not binary number"<<endl;
            exit(0);
        } 
    }
}
void binary :: ones(void){
    check_bin();
    for(int i =0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i) = '1';
        }
        else if(s.at(i)=='1'){
            s.at(i) = '0';
        }
    }
}
void binary :: display(void){
    
    for(int i =0;i<s.length();i++){
   cout<<s.at(i)<<endl;
    }
    //cout<<"total digit number in string"<<c<<endl;
}

int main(){
    binary b;
    b.read();
   // b.check_bin();
   //by doing private function we cannnot access the check binary
    b.display();
    b.ones();
    cout<<"after change the 0 to 1 and 1 to 0"<<endl;
    b.display();

return 0;
}
/*
enter the binary number:
1010011
1
0
1
0
0
1
1
after change the 0 to 1 and 1 to 0
0
1
0
1
1
0
0
*/
