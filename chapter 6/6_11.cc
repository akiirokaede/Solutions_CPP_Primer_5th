#include <iostream>
using namespace std;

void reset(int &n){
    n=0;
    return;
}

int main(){
    int n;
    cin>>n;
    reset(n);
    cout<<n;
    return 0;
}