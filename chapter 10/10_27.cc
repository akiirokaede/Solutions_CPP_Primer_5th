#include <iterator>
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
int main(){
    vector<int> vi{1,2,3,4,5,6,7,8,9,0,1,2,3,4};
    list<int> li;
    sort(vi.begin(),vi.end());
    unique_copy(vi.begin(),vi.end(),back_inserter(li));
    for(auto i:li)cout<<i<<" ";
    return 0;
}