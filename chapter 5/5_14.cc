#include <string>
#include <iostream>
using namespace std;
int main(){
    string s;
    string ts;
    string rs;
    int ti=1;
    int ri=1;
    cin>>ts;
    while (cin>>s)
    {
        if (s==ts)
        {
            ti++;
        }
        else {ts=s;ti=1;}
        if (ti>ri){ri=ti;rs=ts;}
    }
    if (rs=="")
    {
        cout<<"没有单词重复过"<<endl;
    }
    else cout<<ri<<" "<<rs;
    return 0;
}