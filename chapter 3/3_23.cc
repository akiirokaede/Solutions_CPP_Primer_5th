#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    vector<int> nums(10,1);
    for (auto i = nums.begin(); i != nums.end(); i++)
    {
        *i*=2;
    }
    for (auto i = nums.cbegin(); i != nums.cend(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}
