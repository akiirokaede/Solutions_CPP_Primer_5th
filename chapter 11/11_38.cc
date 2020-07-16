#include <iostream>
#include <unordered_map>
#include <iterator>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    unordered_map<string, size_t> imap;
    string word;
    while(cin>>word){
        ++imap[word];
    }
    for(auto w:imap){
        cout<<w.first<<" "<<w.second<<endl;
    }
    return 0;
}