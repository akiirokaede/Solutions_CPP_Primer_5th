#include <iostream>
#include <stdexcept>
using namespace std;
int main(int argc, char** argv){
    try{
        if(argc!=3)throw runtime_error("请输入两个实参！");
        cout<<static_cast<string>(argv[1])+static_cast<string>(argv[2])<<endl;
    } catch(runtime_error err){
        cout<<err.what()<<endl;
    }
}