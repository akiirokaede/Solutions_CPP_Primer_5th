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
    for(auto b=books.begin(),e=books.end();b!=e;b++){
        cout<<b->first<<": "<<b->second<<endl;
    }
    return 0;
}