#include <iostream>
using namespace std;

int biggerNum(const int a, const int *b){
    if(a>*b)return a;
    else return *b;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<biggerNum(a,&b);
    return 0;
}