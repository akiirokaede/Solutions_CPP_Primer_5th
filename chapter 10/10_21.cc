#include <iostream>
using namespace std;
int main(){
    int a=10;
    auto f=[&a]()->bool{while(--a);return true;};
    f();
    return 0;
}