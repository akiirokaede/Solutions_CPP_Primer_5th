#include <iostream>
#include <string>
using namespace std;

istream &print(istream &is){
    string s;
    while(is>>s){
        cout<<s<<"\n";
    }
    is.clear();
    cout<<is.good();
    return is;
}

int main(){
    print(cin);
}