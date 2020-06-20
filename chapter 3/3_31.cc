#include <vector>
#include <iostream>
using namespace std;
int main(){
    int iarr[10];
    for (int i = 0; i < 10; i++)
    {
        iarr[i]=i;
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<iarr[i]<<" ";
    }
    return 0;
}