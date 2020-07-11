#include <new>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char *catstring = new char[strlen("Hello ")+strlen("World!")+1];
    strcat(catstring,"Hello ");
    strcat(catstring, "World!");
    cout<<catstring<<endl;
    delete [] catstring;
    string s1="Hello ",s2="World!";
    string s3=s1+s2;
    cout<<s3<<endl;
    return 0;
}