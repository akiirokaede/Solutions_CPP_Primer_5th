#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string num;
    vector<string> intVector;
    while (cin>>num)
    {
        intVector.push_back(num);
    }
    for(auto i : intVector)cout<<i<<" ";
    return 0;
}