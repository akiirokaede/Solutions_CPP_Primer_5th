#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::getline;
using std::endl;

int main(void)
{
    string line;
    while (getline(cin, line))
    {
        cout<<line<<endl;
    }
    return 0;
}