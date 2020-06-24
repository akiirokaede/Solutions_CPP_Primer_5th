#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vi1{1,2,3,4,5,6,7,8};
    vector<int> vi2{1,2,3,4};
    bool f = true;
    if(vi1.size()>vi2.size()){
        for(decltype(vi2.size()) i=0;i<vi2.size();i++)if(vi1[i]!=vi2[i]){f=false;break;}
    }
    else
    {
        for(decltype(vi1.size()) i=0;i<vi1.size();i++)if(vi1[i]!=vi2[i]){f=false;break;}
    }
    cout<< f;
    return 0;
}