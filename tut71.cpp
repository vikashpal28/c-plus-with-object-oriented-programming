#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v1){
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
vector <int> vec;
int i, size,element;
cout<<"enter the size of vector:"<<endl;
cin>>size;

for (i = 0; i < size; i++)
{
    cout<<"enter the number in vector :"<<endl;
    cin>>element;
    vec.push_back(element);
}
//vec.pop_back();
display(vec);
vector<int> :: iterator itl = vec.begin();
vec.insert(itl+1,1000,28);
display(vec);

return 0;
}