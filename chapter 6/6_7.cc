#include <iostream>
using namespace std;

int useless(){
    static int ct = 0;
    ct++;
    return ct;
}

int main(){
    int n;
    while(cin>>n)
        cout<<useless()<<endl;
    return 0;
}