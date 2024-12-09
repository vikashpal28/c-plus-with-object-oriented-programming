#include<iostream>
using namespace std;

class Bank{
    private:
    int bank_Acc;
    float balance;
    public:
    string name;
    void set_data(string name, float balance,int bank_Acc){
        this->name = name;
        this->balance = balance;
        this->bank_Acc = bank_Acc;
    }
    void withdraw(int amount){
        if(balance>0&&balance>amount){
           
            cout<<amount<<" ruppes successfully withdraw"<<endl;
             balance = balance - amount;
             cout<<"your balance : "<<balance<<endl;
        }
        else{
             throw "You does not have sufficient balance for your current transaction";
        } 
    }
    void deposit(int amount){
        cout<<amount<<" ruppes successfully deposit"<<endl;
        balance= balance+amount;
        cout<<"Your balance : "<<balance<<endl;

    }
};

int main(){
    Bank b1;
    try{
    b1.set_data("vikash",5000,2544);
    b1.deposit(2000);
    b1.withdraw(8000);
    }
    catch(const char *e){
        cout<<"An Exception is occured "<<e<<endl;
    }
return 0;
}