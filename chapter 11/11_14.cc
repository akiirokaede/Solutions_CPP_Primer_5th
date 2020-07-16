#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
    map<string, vector<pair<string,string>>> families;
    string lastName;
    pair<string,string> child;
    while(cin>>lastName){
        while (cin>>child.first>>child.second)
        {
            families[lastName].push_back(child);
        }
    }
    for(auto h:families){
        cout<<h.first<<":\n";
        for(auto n:h.second)cout<<n.first<<" "<<n.second<<" ";
        cout<<endl;
    }
    return 0;
}