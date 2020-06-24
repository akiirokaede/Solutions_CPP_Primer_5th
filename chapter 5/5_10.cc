#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    int sum=0;
    char c;
    while (cin>>c)
    {
        c=tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')sum++;
    }
    cout<<sum<<endl;
}