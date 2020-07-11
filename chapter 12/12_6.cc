#include <new>
#include <vector>
#include <iostream>
using namespace std;

vector<int>* factory(){
    return new vector<int>();
}

vector<int>* use_factory(){
    int i;
    auto p = factory();
    while (cin>>i)
    {
        p->push_back(i);
    }
    return p;
}

void print(){
    auto p = use_factory();
    for(auto i:*p){
        cout<<i<<" ";
    }
    delete p;
    return;
}

int main(){
    print();
    return 0;
}