#include <cstring>
#include <new>
#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char *p=new char[s.size()+1];
    strcat(p, s.c_str());
    cout<<p<<endl;
    return 0;
}