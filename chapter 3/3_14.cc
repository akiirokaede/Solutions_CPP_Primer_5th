#include <iostream>
#include <vector>
using namespace std;
int main(){
    int num;
    vector<int> intVector;
    while (cin>>num)
    {
        intVector.push_back(num);
    }
    for(auto i : intVector)cout<<i<<" ";
    return 0;
}