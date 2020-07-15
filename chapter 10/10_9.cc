#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void elimDups(vector<int> &vi){
    sort(vi.begin(),vi.end());
    auto i =unique(vi.begin(),vi.end());
    vi.erase(i,vi.end());
}

int main(){
    vector<int> vi{1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9};
    elimDups(vi);
    for(auto i:vi)cout<<i<<" ";
    return 0;
}