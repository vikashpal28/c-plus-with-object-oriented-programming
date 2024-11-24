#include <iostream>
using namespace std;
class employee
{
    //static data member
    int id;
    static int count;
    // if do not create static key word then setdata function has own individual value
    // after create static keyword it start form 0 then objects increases and count varibale also increase.
public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of employee " << "= " << id << " and the employee number " << "= " << count << endl;
    }
    static void getcount(void){
        cout<<"the value of count "<<"= "<<count<<endl;
    }
};
int employee::count; // default value of count = 0
int main()
{
    employee harray, vikash, jaya;
    harray.setdata();
    harray.getdata();
    employee ::getcount();
    vikash.setdata();
    vikash.getdata();
    employee ::getcount();
    jaya.setdata();
    jaya.getdata();
    employee ::getcount();
    return 0;
}