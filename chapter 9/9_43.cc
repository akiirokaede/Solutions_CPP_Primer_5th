#include<string>
#include <iostream>
using namespace std;

void changeS(string& s, const string &oldVal, const string &newVal)
{
    for(auto curr=s.begin();curr!=s.end()-oldVal.size();)
    {
        if(oldVal==string(curr,curr+oldVal.size()))
        {
            curr=s.erase(curr, curr+oldVal.size());
            curr=s.insert(curr, newVal.begin(),newVal.end());
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