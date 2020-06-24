#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::logic_error;
int main(){
    int a,b;
    while (cin>>a>>b)
    {
        try {
            if(b==0)throw logic_error("除数不能为 0");
            cout<<"商为："<< a/b<<endl;
        } catch(logic_error err) {
            cout<< err.what() <<endl;
            cout<<"重新输入两个整数？"<<endl;
            char c;
            cin >> c;
            if(!cin||c=='n')break;
        }
    }
    return 0;
}