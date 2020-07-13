#include <vector>
#include <list>
#include <iostream>
using namespace std;
int main(){
    int ia[]={0,1,1,2,3,5,8,13,21,55,89};
    list<int> il(ia,ia+11);
    vector<int> iv(ia,ia+11);
    auto iil=il.begin();
    auto iiv=iv.begin();
    while (iil!=il.end())
    {
        if(*iil%2)iil=il.erase(iil);
        else iil++;
    }
    while (iiv!=iv.end())
    {
        if(*iiv%2==0)iiv=iv.erase(iiv);
        else iiv++;
    }
    for(auto i:il)cout<<i<<" ";
    cout<<endl;
    for(auto i:iv)cout<<i<<" ";
}