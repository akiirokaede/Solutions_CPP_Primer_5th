#include<string>
#include<iostream>
using namespace std;

void DecName(string &s, const string &p, const string &su){
    s.insert(0,p);
    s.insert(s.size(),su);
}

int main()
{
    string name="AkiiroKaede";
    DecName(name,"L.","IV");
    cout<<name;
}