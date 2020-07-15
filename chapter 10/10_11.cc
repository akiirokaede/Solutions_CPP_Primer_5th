#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

void elimDups(vector<string> &vi, bool(*method)(const string &, const string &), bool b){
    if(b){
        sort(vi.begin(),vi.end(),method);
        auto i =unique(vi.begin(),vi.end());
        vi.erase(i,vi.end()); 
    }
    else {
        sort(vi.begin(),vi.end());
        auto i =unique(vi.begin(),vi.end());
        vi.erase(i,vi.end());
    }
}

bool isShorter(const string &s1, const string &s2)
{
    return s1.size()<s2.size();
}

int main(){
    vector<string> vec{"trump","and","trump","and","trump","are","friends","of","chinese"};
    cout<<"开启更短："<<endl;
    elimDups(vec,isShorter,true);
    for(auto i:vec)cout<<i<<" ";
    cout<<endl<<"默认："<<endl;
    elimDups(vec,isShorter,false);
    for(auto i:vec)cout<<i<<" ";
    return 0;
}