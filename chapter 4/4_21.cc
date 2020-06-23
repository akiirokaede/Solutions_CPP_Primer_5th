#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a;
    vector<int> nums;
    while (cin>>a)
    {
        nums.push_back(a);
    }
    for (auto &n : nums)
    {
        n=(n%2?2*n:n);
    }
    for (auto n:nums)cout<<n<<" ";
    return 0;
}