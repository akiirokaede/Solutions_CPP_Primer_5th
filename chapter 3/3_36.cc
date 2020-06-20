#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a[]={0,1,2,3,4,5,6,7,8,9};
    int b[]={0,1,2,3,4,5,6,7,8,9};
    vector<int> va{0,1,2,3,4,5,6,7,8,9};
    vector<int> vb{0,1,2,3,4,5,6,7,8,9};
    cout<<"array:"<<endl;
    bool flag = true;
    if (sizeof(a)!=sizeof(b))
    {
        cout<<"false"<<endl;
    }
    else
    {
        for(int i = 0;i<sizeof(a)/sizeof(int);i++){
            if (a[i]!=b[i])
            {
                flag=false;
                cout<<a[i]<<" "<<b[i]<<endl;
            }
        }
        if (flag)
        {
            cout<<"true"<<endl;
        }
        else
        {
            cout<<"false"<<endl;
        }
        
        
    }
    cout<<"vector:"<<endl;
    if(va!=vb)cout<<"false"<<endl;
    else
    {
        cout<<"true"<<endl;
    }
    return 0;
}