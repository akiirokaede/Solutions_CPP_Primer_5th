#include <sstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct PersonInfo{
    string name;
    vector<string> phones;
};

int main(){
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while(getline(cin, line)){
        PersonInfo info;
        record.str(line);
        record>>info.name;
        while (record>>word)
        {
            info.phones.push_back(word);
        }
        record.clear();
        people.push_back(info);
    }
    for(auto info:people){
        cout<<info.name<<" ";
        for(auto num:info.phones)cout<<num<<" ";
        cout<<endl;
    }
    return 0;
}