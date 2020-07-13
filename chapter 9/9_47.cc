#include<string>
#include<iostream>
using namespace std;
int main(){
    string s("ab2c3d7R4E6");
    string numbers{ "123456789" };
    string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    for(string::size_type i=0;(i=s.find_first_of(numbers,i))!=string::npos;i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    for(string::size_type i=0;(i=s.find_first_of(alphabet,i))!=string::npos;i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    for(string::size_type i=0;(i=s.find_first_not_of(alphabet,i))!=string::npos;i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    for(string::size_type i=0;(i=s.find_first_not_of(numbers,i))!=string::npos;i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}