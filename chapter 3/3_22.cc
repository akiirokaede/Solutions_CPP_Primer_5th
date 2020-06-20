#include <string>
#include <cctype>
#include <vector>
#include <iostream>
using namespace std;
int main(void)
{
    string s;
    vector<string> sv;
    while (cin>>s)
    {
        sv.push_back(s);
    }
    for (auto i = sv.begin(); i != sv.end() && !i->empty(); i++)
    {
        for (auto &c : *i)
        {
            c=toupper(c);
        }
        cout<<*i<<endl;
    }
    return 0;
}