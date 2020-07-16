#include <map>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

auto buildMap(ifstream &map_file){
    map<string,string> trans_map;
    string key;
    string value;
    while (map_file>>key && getline(map_file, value))
    {
        if(value.size()>1)trans_map[key]=value.substr(1);
        else throw runtime_error("没有转换方法"+key);
    }
    return trans_map;
}

const string &transform(const string &word, const map<string,string> &trans_map){
    if(trans_map.find(word)!=trans_map.end())return trans_map.at(word);
    else return word;
}

void word_transform(ifstream &map_file, ifstream &input){
    auto trans_map=buildMap(map_file);
    string text;
    while(getline(input,text)){
        istringstream istream(text);
        string word;
        bool firstword = true;
        while (istream>>word)
        {
            if(firstword)firstword=false;
            else cout<<" ";
            cout<<transform(word, trans_map);
        }
        cout<<endl;
    }
}

int main(){
    ifstream inf("in.txt");
    ifstream outf("out.txt");
    word_transform(inf,outf);
    return 0;
}