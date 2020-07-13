#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<string> ds;
    string s;
    while (cin>>s)
    {
        ds.push_back(s);
    }
    auto cb=ds.cbegin();
    auto ce=ds.cend();
    while(cb!=ce)
    cout<<*cb++;
    return 0;
}