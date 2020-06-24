#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1,s2;
    do{
        if(s1!=""&&s2!="")if(s1.size()<s2.size())cout<<s1<<endl;else cout<<s2<<endl;
        cout<<"please enter two string: "<<endl;
    }
    while(cin>>s1>>s2);
    return 0;
}