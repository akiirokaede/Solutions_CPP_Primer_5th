#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1{1,2,3,4};
    vector<int> v2{1,2};
    vector<int> v3{3};
    cout<<(v1>v2)<<endl;
    cout<<(v3>v2)<<endl;
}