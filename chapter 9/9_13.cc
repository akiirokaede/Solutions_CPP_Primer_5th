#include <list>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    list<int> lt{1,2,3,4};
    vector<double> vb(lt.begin(),lt.end());
    vector<int> vi{12,13,14,15};
    vector<double> vb2(vi.begin(),vi.end());
    for(auto d : vb)cout<<d<<" ";
    cout<<endl;
    for(auto d : vb2)cout<<d<<" ";
    return 0;
}