#include "Sales_data.hh"
#include <iostream>
using namespace std;
int main(void)
{
    Sales_data total;
    Sales_data current;
    if(read(cin, total)){
    while (read(cin, current))
    {
        if(total.isbn()==current.isbn()){
            total.combine(current);
        }
        else{
            print(cout, total);
            cout<<endl;
            total=current;
        }
    }
    print(cout, total);
    }
    else{
        cerr<<"can't initialize."<<endl;
    }
    return 0;
}