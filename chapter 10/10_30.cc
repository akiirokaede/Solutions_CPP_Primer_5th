#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    vector<int> vi;
    istream_iterator<int> iti(cin),eof;
    ostream_iterator<int> os(cout," ");
    copy(iti,eof,back_inserter(vi));
    sort(vi.begin(),vi.end());
    copy(vi.begin(),vi.end(),os);
    return 0;
}