#include "Sales_data.hh"
#include <iostream>
using namespace std;
int main(){
    Sales_data s1;
    print(cout, s1);
    cout<<endl;
    Sales_data s2("nihao");
    print(cout, s2);
    cout<<endl;
    Sales_data s3("hh",1,2.0);
    print(cout, s3);
    cout<<endl;
    Sales_data s4(cin);
    print(cout, s4);
    cout<<endl;
}