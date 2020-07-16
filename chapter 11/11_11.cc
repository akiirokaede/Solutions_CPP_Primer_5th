#include <vector>
#include "../chapter 7/Sales_data.hh"
#include <set>
using namespace std;

bool compareIsbn(const Sales_data &lsd, const Sales_data &rsd)
{
    return lsd.isbn()<rsd.isbn();
}

int main(){
    multiset<Sales_data, bool (*)(const Sales_data&,const Sales_data&)> bookstore(compareIsbn);
    return 0;
}