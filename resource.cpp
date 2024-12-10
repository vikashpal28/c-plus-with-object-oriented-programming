#include <iostream>
#include <new>
#include <string>
using namespace std;
class ResourceGuard{
private:
 const string resource;
public:
ResourceGuard(const string& res):resource(res){
cout << "Acquire the " << resource << "." << endl;
}
~ResourceGuard(){
cout << "Release the "<< resource << "." <<endl;
}
};
int main(){
cout << endl;
ResourceGuard resGuard1{"memoryBlock1"};
// (1)
cout << "\nBefore local scope" << endl;
{
ResourceGuard resGuard2{"memoryBlock2"};
// (2)
}
cout << "After local scope" <<endl;
cout << endl;
cout << "\nBefore try-catch block" <<endl;
try{
ResourceGuard resGuard3{"memoryBlock3"};
// (3)
throw bad_alloc();
}
catch (bad_alloc& e){
    cout << e.what();
}
cout << "\nAfter try-catch block" <<endl;
cout <<endl;
}
/*
output:-
Acquire the memoryBlock1.

Before local scope
Acquire the memoryBlock2.
Release the memoryBlock2.
After local scope


Before try-catch block
Acquire the memoryBlock3.
Release the memoryBlock3.
std::bad_alloc
After try-catch block

Release the memoryBlock1.
*/