#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

void elimDups(list<int> &vi){
    vi.sort();
    vi.unique();
}

int main(){
    list<int> vi{1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9};
    elimDups(vi);
    for(auto i:vi)cout<<i<<" ";
    return 0;
}