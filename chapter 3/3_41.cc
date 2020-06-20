#include <vector>
#include <iterator>
#include <iostream>
using namespace std;
int main(){
    int a[]={0,1,2,3,4,5,6,7,8,9};
    vector<int> va(begin(a), end(a));
    for (auto i: va)
    {
        cout<<i<<" ";
    }
    return 0;
}