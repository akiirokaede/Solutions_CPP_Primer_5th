#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
    map<string, vector<string>> families;
    string lastName;
    string childName;
    while(cin>>lastName){
        while (cin>>childName)
        {
            families[lastName].push_back(childName);
        }
    }
    for(auto h:families){
        cout<<h.first<<":\n";
        for(auto n:h.second)cout<<n<<" ";
    }
    return 0;
}