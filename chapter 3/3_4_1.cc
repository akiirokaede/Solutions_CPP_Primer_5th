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
    else if (a>b)
    {
        cout<<a<<endl;
    }
    else
    {
        cout<<b<<endl;
    }
    return 0;
}