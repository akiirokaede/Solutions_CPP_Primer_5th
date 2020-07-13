#include<iostream>
#include <list>
#include<vector>
using namespace std;
int main(){
    list<int> l1{1,2,3,4};
    vector<int> v2{1,2};
    vector<int> v3{3};
    vector<int> v(l1.begin(),l1.end());
    cout<<(v>v2)<<endl;
    cout<<(v>v2)<<endl;
}