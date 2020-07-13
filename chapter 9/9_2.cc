#include <list>
#include <deque>
#include <iostream>
using namespace std;
int main(){
    list<deque<int>> ldi{{1,2,3},{4,5,6},{7,8,9}};
    for(auto d:ldi)
    {
        for(auto i:d){
        cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}