#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,1);
    vector<int> v4(v2);// same as =v2
    vector<int> v5(v3.begin(),v3.end());
    vector<int> v6{1,2,3,4,5,6,7,8,9};
    vector<int> v7={1,2,3,4};
}