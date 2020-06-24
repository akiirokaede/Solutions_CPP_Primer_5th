#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    int sum=0, wsum=0;
    string s;
    while (getline(cin, s))
    {
        for(auto c:s){
        c=tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')sum++;
        else if(c==' '||c=='\n'||c=='\t')wsum++;
        }
    }
    cout<<"元音数："<<sum<<endl<<"空白字符数："<<wsum<<endl;
}