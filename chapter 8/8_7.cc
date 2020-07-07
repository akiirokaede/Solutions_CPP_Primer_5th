#include "../chapter 7/Sales_data.hh"
#include <iostream>
#include <fstream>
using namespace std;
int main(int argv, char** argc)
{
    Sales_data total;
    Sales_data current;
    ifstream ifs(argc[1]);
    ofstream ofs(argc[2], fstream::app);
    if(read(ifs, total)){
    while (read(ifs, current))
    {
        if(total.isbn()==current.isbn()){
            total.combine(current);
        }
        else{
            print(ofs, total);
            ofs<<endl;
            total=current;
        }
    }
    print(ofs, total);
    ofs<<endl;
    }
    else{
        cerr<<"can't initialize."<<endl;
    }
    return 0;
}