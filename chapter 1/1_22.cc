#include <iostream>
#include "Sales_item.h"
using namespace std;
int main(void)
{
    Sales_item item1, item2;
    cin>>item1;
    while (cin>>item2)
    {
        if (item2.isbn()==item1.isbn())
        {
            item1+=item2;
        }
    }
    cout<<item1;
    return 0;
}