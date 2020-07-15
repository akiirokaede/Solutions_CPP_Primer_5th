#include <iostream>
#include <numeric>
#include <vector>
using namespace std;
int main(){
    int i;
    vector<int> vi;
    while (cin>>i)
    {
        vi.push_back(i);
    }
    auto sum = accumulate(vi.cbegin(),vi.cend(),0);
    cout<<sum<<endl;
    return 0;
}