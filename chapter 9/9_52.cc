#include <stack>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void process(string & s, stack<char> &stk, bool b){
    for(auto i:s){
        if(i=='('){b=true;continue;}
        else if(i==')'){b=false;continue;}
        if(b) stk.push(i);
    }
    string result;
    while (!stk.empty())
    {
        result.insert(result.begin(),stk.top());
        stk.pop();
    }
    if(result.find("+")!=string::npos){
        int a=stoi(result.substr(0,result.find("+")));
        int b=stoi(result.substr(result.find("+")+1, result.size()));
        int sum=a+b;
        result=to_string(sum);
    }
    s.replace(s.find("("), s.find(")")+1, result);
}

int main(){
    stack<char> stk;
    string s="10+(10+20)";
    cout<<s<<" :"<<endl;
    process(s, stk, false);
    cout<<s;
    return 0;
}