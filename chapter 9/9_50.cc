#include <vector>
#include <iostream>
#include <string>
int main(){
    std::vector<std::string> vs{"1","2","3","4"};
    int sum=0;
    double sum2=0;
    for(auto s:vs){
        sum+=std::stoi(s);
    }
    std::cout<<sum<<std::endl;
    for(auto s:vs){
        sum2+=std::stod(s);
    }
    std::cout<<sum2;
    return 0;
}