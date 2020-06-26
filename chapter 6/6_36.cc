#include <string>
#include <iostream>
#include <iterator>
using namespace std;

string (&getAsbegin(string (&as)[10]))[10]{
    return as;
}

int main(){
    string as[10];
    for(auto &s : as)s="初始化了";
    cout<<*getAsbegin(as)<<endl;
    return 0;
}