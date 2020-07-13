#include <iostream>
#include <forward_list>
#include <string>
using namespace std;
void findS(forward_list<string> &sl, string s1, string s2){
    auto prev=sl.before_begin();
    auto curr=sl.begin();
    while (curr!=sl.end())
    {
        if(*curr==s1){
            sl.insert_after(curr, s2);
            return;
        }
        else{
            curr++;
            prev++;
        }
    }
    sl.insert_after(prev, s2);
    return;
}
int main(){
    forward_list<string> sl{"a","b","c","d"};
    string b="b",z="z";
    findS(sl,"a",b);
    for(auto s:sl)cout<<s<<" ";
    cout<<endl;
    findS(sl,"c", b);
    for(auto s:sl)cout<<s<<" ";
    cout<<endl;
    findS(sl,z,z);
    for(auto s:sl)cout<<s<<" ";
    cout<<endl;
    return 0;
}