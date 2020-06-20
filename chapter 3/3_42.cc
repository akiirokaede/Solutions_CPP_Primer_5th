#include <vector>
#include <iterator>
#include <iostream>
using namespace std;
int main(){
    int a[10];
    vector<int> va(10,1);
    for (size_t i = 0; i < va.size(); i++)
    {
        a[i]=va[i];
    }
    
    for (auto i: a)
    {
        cout<<i<<" ";
    }
    return 0;
}