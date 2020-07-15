#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int i;
    vector<int> vi;
    while (cin>>i)
    {
        vi.push_back(i);
    }
    auto re = count(vi.cbegin(),vi.cend(),10);
    cout<<re<<endl;
    return 0;
}