#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool tooLong(const string &s)
{
    return (s.length()>=5?true:false);
}

int main(){
    vector<string> vec{"trump","and","trump","and","trump","are","friends","of","chinese"};
    auto ed=partition(vec.begin(),vec.end(),tooLong);
    vec.erase(ed,vec.end());
    for(auto i:vec)cout<<i<<" ";
    return 0;
}