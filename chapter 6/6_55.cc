#include <vector>
#include <iostream>
using namespace std;
int func(int a, int b);

using t1 = decltype(func) *;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }

vector<t1> vec{ add, subtract, multiply, divide };

int main(void){
    for(auto f: vec){cout<<f(8,4)<<" ";}
    return 0;
}