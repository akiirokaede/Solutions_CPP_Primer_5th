#include <iostream>
using namespace std;
int main(){
    int a=10,b=20;
    auto f=[](int a,int b){return a+b;};
    int sum=f(a,b);
    cout<<sum;
    return 0;
}