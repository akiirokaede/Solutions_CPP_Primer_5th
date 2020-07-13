#include<string>
#include<iostream>
using namespace std;

void DecName(string &s, const string &p, const string &su){
    s.insert(s.begin(),p.begin(),p.end());
    s.append(su.begin(),su.end());
}

int main()
{
    string name="AkiiroKaede";
    DecName(name,"L.","IV");
    cout<<name;
}