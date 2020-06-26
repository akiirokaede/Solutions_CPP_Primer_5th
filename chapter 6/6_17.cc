#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool hasUpper(const string &s){
    for(auto c : s){
        if(isupper(c))return true;
    }
    return false;
}

void toLower(string &s){
    for(auto &c : s){
        c=tolower(c);
    }
}

int main(){
    string s;
    cin>> s;
    cout<<hasUpper<<endl;
    toLower(s);
    cout<<s;
    return 0;
}