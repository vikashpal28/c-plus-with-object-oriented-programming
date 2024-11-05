#include<iostream>
using namespace std;
class shop{
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void intcounter(void){  counter = 0;}
    void setprice(void);
    void displayPrice(void);

};
void shop :: setprice(void){
    cout<<"enter the Id of item "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"enter the price of the item "<<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop :: displayPrice(void){
    for(int i = 0;i<counter;i++){
        cout<<"the price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }

}

int main(){
    shop s;
    s.intcounter();
    s.setprice();
    s.setprice();
    s.setprice();
    s.setprice();
    s.displayPrice();
return 0;
}
/*
output
enter the Id of item 1
1
enter the price of the item
10
enter the Id of item 2
2
enter the price of the item
20
enter the Id of item 3
3
enter the price of the item
30
enter the Id of item 4
4
enter the price of the item
40
the price of item with id 1 is 10
the price of item with id 2 is 20
the price of item with id 3 is 30
the price of item with id 4 is 40
*/
