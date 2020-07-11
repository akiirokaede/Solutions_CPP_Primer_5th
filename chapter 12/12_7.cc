#include <vector>
#include <iostream>
#include <memory>
using namespace std;

shared_ptr<vector<int>> factory(){
    return make_shared<vector<int>>();
}

shared_ptr<vector<int>> use_factory(){
    int i;
    auto p =factory();
    while (cin>>i)
    {
        p->push_back(i);
    }
    return p;
}

void print()
{
    auto p = use_factory();
    for(auto i :*p){
        cout<<i<<" ";
    }
    return;
}

int main(){
    print();
    return 0;
}