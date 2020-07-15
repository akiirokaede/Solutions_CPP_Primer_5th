#include "../chapter 7/Sales_data.hh"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareIsbn(Sales_data &a, Sales_data &b){
    return a.isbn()<b.isbn();
}

int main(){
    Sales_data a("hhh",10,10.0);
    Sales_data b("nima", 10, 10.0);
    vector<Sales_data> vs{a,b};
    sort(vs.begin(),vs.end(),compareIsbn);
    for(const auto &s:vs){cout<<s.isbn()<<" ";}
    return 0;
}