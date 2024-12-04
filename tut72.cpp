#include<iostream>
#include<list>
using namespace std;
  
void display(list<int> &lst){
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
       cout<<*it<<" ";
    }
    cout<<endl;

}  
  int main(){
    list<int> list1;//empty list with 0 length.
  list<int> list2(3);//empty list with size 7.
  list1.push_back(1);
  list1.push_back(7);
  list1.push_back(0);
  list1.push_back(4);
  list1.push_back(12);
//   list<int> :: iterator iter;
//   iter = list1.begin();
//   cout<<*iter<<" ";
//   iter++;
//   cout<<*iter<<" ";
//   iter++;
//   cout<<*iter<<" ";
//   iter++;
//   cout<<*iter<<" ";
   display(list1);
   //list1.pop_back();
   //list1.pop_front();
   list1.sort();
   display(list1);
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 23;
    iter++;
    *iter = 28;
    iter++;
    *iter = 1;
    iter++;
    display(list2);
return 0;
}