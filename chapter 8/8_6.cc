#include "../chapter 7/Sales_data.hh"
#include <iostream>
#include <fstream>
using namespace std;
int main(int argv, char** argc)
{
    Sales_data total;
    Sales_data current;
    fstream ifs(argc[1]);
    if(read(ifs, total)){
    while (read(ifs, current))
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