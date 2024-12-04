#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
  map<string, int> marksmap;
  marksmap["Vikash"] = 89;
  marksmap["Alok"]  = 78;
  marksmap["Shivam"] = 69;
  map<string, int> :: iterator iter;
  for(iter = marksmap.begin();iter!=marksmap.end();iter++){
    cout<<(*iter).first<<" "<<(*iter).second<<endl;
  }
return 0;
}