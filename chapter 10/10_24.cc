#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <iostream>
using namespace std;
using namespace std::placeholders;

bool check_size(int i, int sz){
    return i>sz;
}

int main(){
    string s{"trump"};
    vector<int> vi{1,2,3,4,5,6,7,8,9};
    auto i=find_if(vi.begin(),vi.end(),bind(check_size,_1,s.length()));
    cout<<*i;
    return 0;
}