#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main(){
    map<string, size_t> imap;
    string word;
    while(cin>>word){
        string temp;
        copy_if(word.begin(),word.end(),back_inserter(temp),[](char &c)->bool{
            c=tolower(c);
            return isalpha(c);});
        ++imap[temp];
    }
    for(auto w:imap){
        cout<<w.first<<" "<<w.second<<endl;
    }
    return 0;
}