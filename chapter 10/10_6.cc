#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    vector<int> vi{1,2,3,4,54,5,6,54,7,8,9};
    fill_n(vi.begin(),vi.size(),0);
    for(auto i:vi)
    {
        cout<<i<<" ";
    }
    return 0;
}