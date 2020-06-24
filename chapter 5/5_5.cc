#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int grade;
    vector<string> grades{"F","D","C","B","A","A++"};
    while (cin>>grade)
    {
        string lettergrade;
        if(grade<60)lettergrade=grades[0];
        else lettergrade=grades[(grade-50)/10];
        if(grade!=100){
            if(grade%10>7)lettergrade+="+";
            else if(grade%10<3)lettergrade+="-";
        }
        cout<<lettergrade<<endl;
    }
    return 0;
}
