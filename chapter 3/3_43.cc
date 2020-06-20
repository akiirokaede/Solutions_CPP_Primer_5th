#include <iostream>
using namespace std;
int main(void){
    int ia[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"First"<<endl;
    for (int (&ir)[4]:ia)
    {
        for (int ic:ir)
        {
            cout<<ic<<" ";
        }
        cout<<endl;
    }
    cout<<"Second"<<endl;
    for(size_t i = 0;i<3;i++){
        for(size_t j=0;j<4;j++)
        {
            cout<<ia[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Third"<<endl;
    for(int (*ir)[4] = ia;ir!=ia+3;ir++){
        for(int *ic=*ir;ic!=*ir+4;ic++){
            cout<<*ic<<" ";
        }
        cout<<endl;
    }
    return 0;
}