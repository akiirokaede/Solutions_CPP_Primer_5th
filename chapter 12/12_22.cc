// #include "ConstStrBlobPtr.hh"
#include "StrBlob.hh"
#include "ConstStrBlobPtr.hh"
#include <fstream>
#include <iostream>
#include <string>
#include <exception>
using namespace std;
int main(){
    StrBlob b1({"I","love","you"});
    ConstStrBlobPtr sbp(b1);
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