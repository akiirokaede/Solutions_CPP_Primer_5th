#include <string>
#include <iostream>
using namespace std;

string make_plural(int i, const string &word, const string &ending="s"){
    return (i>1)?word+ending : word;
}

int main(){
    cout<<make_plural(1, "success", "es")<<endl
        <<make_plural(1, "failure")<<endl;
    cout<<make_plural(2, "success", "es")<<endl
        <<make_plural(2, "failure")<<endl;
}