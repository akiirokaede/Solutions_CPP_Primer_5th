#include <vector>
#include <iostream>
using namespace std;
int main(){
    int iarr[10];
    int iarr2[10];
    for (int i = 0; i < 10; i++)
    {
        iarr[i]=i;
    }
    for (int i = 0; i < 10; i++)
    {
        iarr2[i]=iarr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<iarr2[i]<<" ";
    }
    cout<<endl;
    vector<int> iv{0,1,2,3,4,5,6,7,8,9};
    vector<int> iv2=iv;
    for (auto i: iv2)
    {
        cout<<i<<" ";
    }
    
    return 0;
}