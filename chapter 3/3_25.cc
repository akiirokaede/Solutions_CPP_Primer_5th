#include <vector>
#include <iostream>
using namespace std;
int main(void)
{
    vector<unsigned> scores(11,0);
    unsigned grade;
    while (cin>>grade)
    {
        ++*(scores.begin()+(grade/10));
    }
    for (auto i = scores.begin(); i != scores.end(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}