#include "../chapter 7/Sales_data.hh"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    Sales_data a("hhh",10,10.0);
    Sales_data b("nima", 10, 10.0);
    vector<Sales_data> vs{a,b};
    sort(vs.begin(),vs.end(),[](const Sales_data &a, const Sales_data &b){return a.isbn()<b.isbn();});
    for(const auto &s:vs){cout<<s.isbn()<<" ";}
    return 0;
}