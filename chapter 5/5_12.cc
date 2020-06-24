#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    int sum=0;
    string s;
    while (getline(cin, s))
    {
        for(decltype(s.size()) i=0;i<s.size()-1;i++){
            if(s[i]=='f'&&(s[i+1]=='f'||s[i+1]=='l'||s[i+1]=='i'))sum++;
        }
    }
    cout<<sum;
}