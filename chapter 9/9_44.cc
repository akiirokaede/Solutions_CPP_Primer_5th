#include<string>
#include <iostream>
using namespace std;

void changeS(string& s, const string &oldVal, const string &newVal)
{
    for(size_t curr=0;curr<s.size();)
    {
        if(oldVal==s.substr(curr,oldVal.size()))
        {
            s=s.replace(curr,oldVal.size(),newVal);
            curr+=newVal.size();
        }
        else
        {
            curr++;
        }
    }
    return;
}

int main(){
    string s="thothruthothru";
    string oldVal="tho";
    string newVal="though";
    changeS(s,oldVal,newVal);
    cout<<s;
}