#include <memory>
#include <iostream>
#include <string>
using namespace std;
int main(){
    allocator<string> allo;
    auto p=allo.allocate(10);
    auto q=p;
    string s;
    while(q!=p+10&&cin>>s){ // 注意顺序
        allo.construct(q++,s);
    }
    while(q!=p){
        cout<<*--q<<" ";
        allo.destroy(q);
    }
    allo.deallocate(p,10);
    return 0;
}