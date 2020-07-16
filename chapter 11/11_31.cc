#include <map>
#include <string>
#include <iostream>
using namespace std;
int main(){
    multimap<string,string> books;
    books.insert({"Kaede","C++ Primer"});
    books.insert({"Kaede","Machine Learning"});
    books.insert({"Trump","Make America Great Again"});
    books.insert({"Ramen","NOODLESSSSSSSSSS"});
    string name;
    cin>>name;
    auto result=books.find(name);
    if(result==books.end()){cout<<"没有"<<endl;return 0;}
    else{
        cout<<result->first<<": "<<result->second<<endl;
        return 0;
    }
}