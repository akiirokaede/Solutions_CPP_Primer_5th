#include <string>
#include <vector>
#include <iostream>
#include <utility>
using namespace std;
int main(){
    vector<pair<string,int>> vp;
    pair<string,int> p;
    while (cin>>p.first>>p.second)
    {
        vp.push_back(p);
    }
    for(auto p:vp){
        cout<<p.first<<":"<<p.second<<endl;
    }
    return 0;
}