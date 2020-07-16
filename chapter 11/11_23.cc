#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <iterator>
using namespace std;
int main(){
    multimap<string, vector<string>> families;
    string lastName;
    while(cin>>lastName){
        vector<string> child;
        istream_iterator<istream> ist(cin),eof;
        copy(ist, eof, back_inserter(child));
        families.insert({lastName,child});
    }
    for(auto h:families){
        cout<<h.first<<":\n";
        for(auto n:h.second)cout<<n<<" ";
    }
    return 0;
}