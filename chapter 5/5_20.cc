#include <string>
#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string s;
    string ts;
    cin>>ts;
    while (cin>>s)
    {
        if(s==ts&&isupper(s[0])){cout<<s;return 0;}
        else ts=s;
    }
    cout<<"没有重复的单词";
    return 0;
}