#include <string>
#include <vector>
#include <cctype>
#include <iostream>
using namespace std;
int main(){
    string word;
    vector<string> words;
    while (cin>>word)
    {
        for (auto &c:word)
        {
            c=toupper(c);
        }
        words.push_back(word);
    }
    for (auto word:words)
    {
        cout<<word<<endl;
    }
    return 0;
}