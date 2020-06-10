#include <iostream>
using namespace std;
int main(void){
    int v1,v2;
    cout<<"Please enter two integers:"<<endl;
    cin>>v1>>v2;
    while (v1<=v2)
    {
        cout<<v1<<endl;
        v1++;
    }
    return 0;
}