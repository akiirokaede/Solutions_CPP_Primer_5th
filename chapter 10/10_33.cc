#include <fstream>
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;
int main(int argv, char** argc){
    if(argv!=4){cout<<"非法参数";return 1;}
    vector<int> vi;
    ifstream ifs(argc[1]);
    ofstream odd(argc[2]);
    ofstream even(argc[3]);
    istream_iterator<int> iti(ifs),eof;
    ostream_iterator<int> oodd(odd," ");
    ostream_iterator<int> oeven(even,"\n");
    copy(iti,eof,back_inserter(vi));
    sort(vi.begin(),vi.end());
    partition_copy(vi.begin(),vi.end(),oodd,oeven,[](int i){return i%2;});
    return 0;
}