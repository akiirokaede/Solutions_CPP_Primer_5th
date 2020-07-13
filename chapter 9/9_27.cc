#include <forward_list>
#include <iostream>
using namespace std;
int main(){
    int ia[]={0,1,1,2,3,5,8,13,21,55,89};
    forward_list<int> il(ia,ia+11);
    auto prev=il.before_begin();
    auto curr=il.begin();
    while(curr!=il.end()){
        if(*curr%2)curr=il.erase_after(prev);
        else curr++,prev++;
    }
    for(auto i:il)cout<<i<<" ";
    return 0;
}