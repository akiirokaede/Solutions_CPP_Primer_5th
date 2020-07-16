#include <iostream>
#include <list>
#include <map>
#include <string>
using namespace std;
int main(){
    map<string,list<int>> dic;
    string word;
    int i=0;
    while (cin>>word)
    {
        dic[word].push_back(++i);
    }
    for(auto i:dic){
        cout<<i.first<<":\n";
        for(auto l:i.second)cout<<l<<" ";
        cout<<endl;
    }
    return 0;
}