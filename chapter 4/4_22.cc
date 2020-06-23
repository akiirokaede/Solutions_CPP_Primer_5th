#include <iostream>
using namespace std;
int main(){
    int n;
    while (cin>>n)
    {
        cout<<((n>90)?"high pass":(n>=60)?(n<=75?"low pass":"pass"):"fail");
    }
    return 0;
}