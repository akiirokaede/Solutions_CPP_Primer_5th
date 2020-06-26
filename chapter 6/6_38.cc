#include <iostream>
using namespace std;
using nT = int[5];
int odd[]={1,3,5,7,9};
    int even[]={2,4,6,8,0};
    nT &arrPtr(int i){
        return (i%2)?odd:even;
    }

int main(){
    int n;
    cin>>n;
    for(int i=0;i<5;i++)cout<<arrPtr(n)[i]<<" ";
    return 0;
}