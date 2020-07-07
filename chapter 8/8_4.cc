#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    ifstream ifs("8_1_2.cc");
    vector<string> vs;
    string s;
    while (getline(ifs,s))
    {
        vs.push_back(s);
    }
    for(auto s:vs){
        cout<<s<<endl;
    }
    return 0;
}