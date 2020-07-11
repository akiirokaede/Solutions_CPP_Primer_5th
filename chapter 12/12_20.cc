#include "StrBlob.hh"
// #include "StrBlobPtr.hh"
#include <fstream>
#include <iostream>
#include <string>
#include <exception>
using namespace std;
int main(){
    StrBlob b1;
    fstream fs("test.txt");
    string s;
    while(getline(fs,s)){
        b1.push_back(s);
    }
    StrBlobPtr sbp(b1);
    try
    {
        while(true){
            cout<<sbp.deref()<<endl;
            sbp.incr();
        }
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    return 0;
}