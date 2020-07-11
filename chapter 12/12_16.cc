// 无论是直接初始化还是赋值，g++ 编译器都会报：
// 错误：使用了被删除的函数‘std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = int; _Dp = std::default_delete<int>]’
#include <memory>
#include <iostream>
using namespace std;
int main(){
    unique_ptr<int> upi(new int(15));
    // unique_ptr<int> upi2(upi);
    unique_ptr<int> upi3=upi;
}