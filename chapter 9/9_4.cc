#include <vector>
#include <iostream>
using namespace std;

bool findInt(vector<int>::iterator ib, vector<int>::iterator ie, int i)
{
    while (ib!=ie)
    {
        if(*(ib++)==i){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> vi{1,2,3,4,5,6,7,8,9,0};
    auto ib=vi.begin();
    auto ie=vi.end();
    int i=99;
    cout<<findInt(ib, ie, i);
    return 0;
}