#include <string>
#include <iostream>
using std::cin;
using std::cout;
using std::getline;
using std::endl;
using std::string;

int main(void){
    string i, every;
    while (cin>>i)
    {
        every=every+" "+i;
    }
    cout<<every<<endl;
    return 0;
}