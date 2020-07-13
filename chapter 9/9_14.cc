#include <vector>
#include <iostream>
#include <list>
using namespace std;
int main(){
    list<const char *> lcs{"hello", "world!"};
    vector<string> vs;
    vs.assign(lcs.begin(),lcs.end());
    for(auto s : vs)
    cout<<s<<" ";
    return 0;
}