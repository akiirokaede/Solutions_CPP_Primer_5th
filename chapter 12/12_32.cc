#include "12_32.hh"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void runQueries(ifstream &infile){
    TextQuery tq(infile);
    while (true)
    {
        cout<<"请输入一个单词，或输入 q 退出： ";
        string s;
        if(!(cin>>s) || s=="q")break;
        print(cout,tq.query(s))<<endl;
    }
}

int main(){
    ifstream ifs("story.txt");
    runQueries(ifs);
    return 0;
}