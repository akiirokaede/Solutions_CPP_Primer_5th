#include <iostream>
using namespace std;

void exchange(int *a, int *b){
    int t;
    t=*a,*a=*b,*b=t;
    return;
}

int main(){
    int a,b;
    cin>>a>>b;
    exchange(&a,&b);
    cout<<a<<b;
}
