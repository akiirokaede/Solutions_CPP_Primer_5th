#include <iostream>
#include <iterator>
using namespace std;
int main(){
    int a[10];
    int *p = begin(a);
    while(p!=end(a)){
        *(p++)=0;
    }
    for (auto i : a)
    {
        cout<<i<<" ";
    }
    return 0;
}