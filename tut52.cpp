#include<iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:
    void set_data(int id, float price){
        this->id = id;
        this->price = price;
    }
    void get_date(void){
        cout<<"The id of the item = "<<id<<endl;
        cout<<"The price of the item = "<<price<<endl;
    }
};

int main(){
    int size = 2;
    int i,p;
    float q;
    shop *ptr = new shop[size];
    shop *temptr = ptr;
    for(i =0;i<size;i++){
        cout<<"Enter the Id and price of an item :"<<i+1<<endl;
        cin>>p>>q;
        ptr->set_data(p,q);
        ptr++;
    }

    for(i = 0;i<size;i++){
        cout<<"Item number :"<<i+1<<endl;
        temptr->get_date();
        temptr++;
        
    }

return 0;
}