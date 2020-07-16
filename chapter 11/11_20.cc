#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    map<string, size_t> imap;
    string word;
    while(cin>>word){
        auto flag = imap.insert({word,1});
        if(!flag.second)++flag.first->second;
    }
    for(auto w:imap){
        cout<<w.first<<" "<<w.second<<endl;
    }
    return 0;
}