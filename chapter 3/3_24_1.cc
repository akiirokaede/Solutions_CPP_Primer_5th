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
    for (decltype(nums.size()) i = 0; i < nums.size(); i++)
    {
        if (i%2==1)
        {
            ii+=nums[i];
            cout<<ii<<endl;
            ii=0;
        }
        else if (i==nums.size()-1&&nums.size()%2==1)
        {
            cout<<nums[i];
        }
        else
        {
            ii+=nums[i];
        }
    }
    return 0;
}