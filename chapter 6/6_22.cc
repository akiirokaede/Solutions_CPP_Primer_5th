#include <iostream>
using namespace std;

void exchangeNum(int *a, int *b){
    int t;
    t=*a,*a=*b,*b=t;
    return;
}

int main(){
    int a,b;
    cin>>a>>b;
    exchangeNum(&a,&b);
    cout<<a<<b;
    return 0;
}
