#include <iostream>
using namespace std;

int absou(int n){
    if(n<0)return -n;
    else return n;
}

int main(){
    int n;
    cin>>n;
    cout<<absou(n)<<endl;
    return 0;
}