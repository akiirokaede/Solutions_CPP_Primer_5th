#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    ifstream ifs("test.txt");
    vector<string> vs;
    string s;
    while (ifs>>s)
    {
        vs.push_back(s);
    }
    for(auto s:vs){
        cout<<s<<endl;
    }
    return 0;
}