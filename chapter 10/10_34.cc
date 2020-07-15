#include <iterator>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream fs("../chapter 8/test.txt");
    istream_iterator<string> itf(fs),eof;
    ostream_iterator<string> os(cout, " ");
    vector<string> vs;
    copy(itf,eof,back_inserter(vs));
    copy(vs.crbegin(),vs.crend(),os);
    return 0;
}