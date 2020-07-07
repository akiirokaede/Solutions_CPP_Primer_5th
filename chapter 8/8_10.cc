#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    ifstream ifs("test.txt");
    vector<string> vs;
    string s;
    while (getline(ifs,s))
    {
        vs.push_back(s);
    }
    string word;
    for(auto s:vs){
        istringstream isstr(s);
        while(isstr>>word){
            cout<<word<<endl;
        }
    }
    return 0;
}