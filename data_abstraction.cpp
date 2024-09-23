#include<iostream>
using namespace std;
class bankAccount{
    private:
    int accountnumber;
    double accountbalance;
    public:
    bankAccount(int accountnumber, double accountbalance){
        this->accountbalance = accountbalance;
        this->accountnumber = accountnumber;
    }
    void deposit(double amount){
        accountbalance+=amount;
    }
    void withdraw(double amount){
        if(accountbalance >= amount){
            accountbalance-=amount;
        }
        else{
           cout<<"insuffient funds:"<<endl;
        }
    }
    double getbalance() const{
        return accountbalance;
    }
};
int main(){
    bankAccount myAccount(12345,1000);
    myAccount.deposit(500);
    myAccount.withdraw(1600);
    cout<<"current balance:"<<myAccount.getbalance()<<endl;
    return 0;
}
/*
output
insuffient funds:
current balance:1500
*/