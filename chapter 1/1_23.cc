#include <iostream>
#include "Sales_item.h"
using namespace std;
int main(void)
{
    Sales_item item1, item2;
    int i=1;
    cin>>item1;
    while (cin>>item2)
    {
        if (item1.isbn()!=item2.isbn())
        {
            cout<<i<<endl;
            item1=item2;
            i=1;
        }
        else
        {
            i++;
        }
    }
    cout<<i<<endl;
    return 0;
}