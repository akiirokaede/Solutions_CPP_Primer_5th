#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
using namespace std;
using namespace placeholders;

void elimDups(vector<string> &vi){
    sort(vi.begin(),vi.end());
    auto i =unique(vi.begin(),vi.end());
    vi.erase(i,vi.end());
}

bool check_size(const string &s, int sz){
    return s.size()>=sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz){
    elimDups(words);
    stable_sort(words.begin(),words.end(),
    [](const string &a, const string &b){return a.size()<b.size();}
    );
    // auto wc=find_if(words.begin(),words.end(),[sz](string &a){return a.size()>=sz;});
    // auto count=words.end()-wc;
    auto wc=partition(words.begin(),words.end(),bind(check_size,_1,sz));
    auto count=wc-words.begin();
    auto f=[](int c,const string &s, const string &suf){return c>=2?s+suf:s;};
    cout<<count<<" "<<f(count,"word","s")<< " of length "<<sz<<" or longer."<<endl;
    for_each(words.begin(),wc, [](const string &s){cout<<s<<" ";});
    cout<<endl;
}


int main(){
    vector<string> vec{"trump","and","trump","and","trump","are","friends","of","chinese"};
    biggies(vec,4);
    return 0;
}