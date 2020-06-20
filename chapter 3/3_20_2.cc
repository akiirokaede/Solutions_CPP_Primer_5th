#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    int ii;
    vector<int> nums;
    while (cin>>ii)
    {
        nums.push_back(ii);
    }
    ii=0;
    for (decltype(nums.size()) i = 0; i < nums.size()/2; i++)
    {
        cout<<nums[i]+nums[nums.size()-1-i]<<" ";
        if (nums.size()%2==1&&i==nums.size()/2-1)
        {
            cout<<nums[nums.size()/2];
            break;
        }
    }
    return 0;
}