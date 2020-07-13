#include <vector>
#include <iostream>
using namespace std;

vector<int>::iterator findInt(vector<int>::iterator ib, vector<int>::iterator ie, int i)
{
    while (ib!=ie)
    {
        if(*ib==i){
            return ib;
        }
        ib++;
    }
    return ie;
}

int main(){
    vector<int> vi{1,2,3,4,5,6,7,8,9,0};
    auto ib=vi.begin();
    auto ie=vi.end();
    int i=9;
    if(findInt(ib, ie, i)!=ie)cout<<*findInt(ib, ie, i)<<endl;
    else
    {
        cout<<"Can't find."<<endl;
    }
    return 0;
}