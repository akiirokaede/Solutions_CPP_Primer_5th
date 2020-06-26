#include <iostream>
#include <vector>
using namespace std;
void pvector(vector<int> vi, int i){
    if(i<0)return;
    cout<<vi[i--]<<" ";
    pvector(vi, i);
}
int main(){
    vector<int> vi{1,2,3,4,5,6};
    pvector(vi,vi.size()-1);
    return 0;
}