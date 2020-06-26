#include <iostream>
using namespace std;

int fact(int n)
{
    int ret=1;
    while(n>1)ret*=n--;
    return ret;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}