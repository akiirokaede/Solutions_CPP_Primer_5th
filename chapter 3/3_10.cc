#include <string>
#include <iostream>
#include <cctype>
using namespace std;
int main(void)
{
    string s;
    cin>>s;
    for(auto &c : s)
        if (ispunct(c))
        {
            c=' ';
        }
    cout<<s;
    return 0;
}