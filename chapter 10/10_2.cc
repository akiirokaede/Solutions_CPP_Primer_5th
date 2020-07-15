#include <iostream>
#include <algorithm>
#include <list>
#include <string>
using namespace std;
int main(){
    string s;
    list<string> ls;
    while (cin>>s)
    {
        ls.push_back(s);
    }
    auto re = count(ls.cbegin(),ls.cend(),"魔法少女");
    cout<<re<<endl;
    return 0;
}