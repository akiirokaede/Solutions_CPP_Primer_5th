#include <iostream>
#include <initializer_list>
#include <vector>
using namespace std;

int sumNumbers(initializer_list<int> ls){
    int sum=0;
    for(auto n:ls){sum+=n;}
    return sum;
}

int main(){
    cout<<sumNumbers({1,2,3,4,5,6,7,8,9});
    return 0;
}