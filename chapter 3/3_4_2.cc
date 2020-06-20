#include <string>
#include <iostream>
using std::cin;
using std::cout;
using std::getline;
using std::endl;
using std::string;

int main(void){
    string a,b;
    getline(cin, a);
    getline(cin, b);
    if (a==b)
    {
        cout<<"same!"<<endl;
    }
    else if (a.size()>b.size())
    {
        cout<<a<<endl;
    }
    else if (a.size()<b.size())
    {
        cout<<b<<endl;
    }
    return 0;
}