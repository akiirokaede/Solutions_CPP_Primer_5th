#include <iostream>
#include <iterator>
using namespace std;
using arr=int[4];

void print(const int i){
    cout<<i;
    cout<<endl;
    return;
}

void print(const int *j, int n){
    for(int i=0;i<n;i++){
        cout<<j[i]<<" ";
    }
    cout<<endl;
    return;
}

void print(const int *beg, const int *en){
    while(beg!=en){
        cout<<*beg++<<" ";
    }
    cout<<endl;
    return;
}

void print(arr &h){
    for(auto i:h)cout<<i<<" ";
    cout<<endl;
    return;
}

int main(){
    int i=0,j[2]={0,1},h[4]={1,2,3,4};
    print(i);
    print(j, 2);
    print(begin(j),end(j));
    print(h);
    return 0;
}