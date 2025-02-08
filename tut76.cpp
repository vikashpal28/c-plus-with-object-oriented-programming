#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> v1 = {"vikash","jaya","alok","jaya"};
    int c = 0;
    int char_count = 0;
    vector<string> ::iterator first = v1.begin();
    vector<string> ::iterator last = v1.end();
    while(first!=last){
        if(*first == "jaya"){
        first++;
        c++;
        }
        else{
            first++;
        }
        
    }
    for (first = v1.begin(); first != last; ++first) {
        for(char ch : *first){
        if(ch == 'a'){
        char_count += first->length();
        }
        }
        // for(char ch : *first){
        // if(ch == 'a'){
        // char_count ++;
        // }
        // }

    }
    
    cout << "count: " << c << endl;
    cout << "Total characters: " << char_count << endl;
    return 0;
}
