#include<iostream>
#include<time.h>
using namespace std;
int main(){
  struct tm* ptr;
  time_t t;
  t = time(NULL);
  ptr = localtime(&t);
  cout<<asctime(ptr)<<endl;
  return 0;   
}
/*
output
gmtime(&t)
Sun Sep 15 13:28:28 2024
localtime(&t)
Sun Sep 15 18:59:14 2024
*/