#include <iostream>
using namespace std;
int main(void){
    int ia[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"First"<<endl;
    for (auto &ir:ia)
    {
        for (auto ic:ir)
        {
            cout<<ic<<" ";
        }
        cout<<endl;
    }
    cout<<"Second"<<endl;
    for(auto i = 0;i<3;i++){
        for(auto j=0;j<4;j++)
        {
            cout<<ia[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Third"<<endl;
    for(auto *ir = ia;ir!=ia+3;ir++){
        for(auto *ic=*ir;ic!=*ir+4;ic++){
            cout<<*ic<<" ";
        }
        cout<<endl;
    }
    return 0;
}