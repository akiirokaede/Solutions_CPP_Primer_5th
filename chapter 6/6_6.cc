#include <iostream>
using namespace std;

int fact(int n)
{
    int ret=1;
    static int ct = 0;
    while(n>1)ret*=n--;
    ct++;
    cout<<"执行了："<<ct<<"次 fact"<<endl;
    return ret;
}

int main(void)
{
    int n;
    while(cin>>n)
    {
        cout<<fact(n)<<endl;
    }
    return 0;
}