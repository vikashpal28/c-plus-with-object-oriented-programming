#include <iostream>
using namespace std;

class bankDeposit
{
    int pricipal;
    int year;
    float interestRate;
    float returnvalue;

public:
    bankDeposit(){}
    bankDeposit(int p, int y, float R);//R in 0.00
    bankDeposit(int p, int y, int r);//r in percentage like 1,2
    void show();
};
bankDeposit :: bankDeposit(int p, int y, float R)
{
    pricipal = p;
    year = y;
    interestRate = R;
    returnvalue = pricipal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestRate);
    }
}
bankDeposit :: bankDeposit(int p, int y, int r)
{
    pricipal = p;
    year = y;
    interestRate = float(r) / 100;
    returnvalue = pricipal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestRate);
    }
}
void bankDeposit ::show()
{
    cout << "your pricipal value is " << 
    pricipal << " no of year you invested " << year << " rate of interest " << 
    interestRate << " total return " << returnvalue << endl;
}
int main()
{
    bankDeposit b1,b2,b3;
    int p,y,r;
    float R;
    cout<<"enter the pricipal, year and interestRate:"<<endl;
    cin>>p>>y>>r;
    b1 = bankDeposit(p,y,r);
    b1.show();
    cout<<"enter the pricipal, year and interestRate:"<<endl;
    cin>>p>>y>>R;
    b2 = bankDeposit(p,y,R);
    b2.show();
    b3.show();
    return 0;
}