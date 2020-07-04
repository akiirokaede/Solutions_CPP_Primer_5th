#include "Sales_data.hh"
#include <iostream>
using namespace std;
int main(void)
{
    Sales_data total(cin);
    if(total.isbn()==""){cerr<<"NO DATA?!";return 0;}
    Sales_data current;
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
    return 0;
}