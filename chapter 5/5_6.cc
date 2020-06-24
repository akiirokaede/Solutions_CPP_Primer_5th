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
        lettergrade=(grade<60)?grades[0]:((grade!=100)?((grade%10>7)?grades[(grade-50)/10]+"+":((grade%10<3)?grades[(grade-50)/10]+"-":grades[(grade-50)/10])):grades[(grade-50)/10]);
        cout<<lettergrade<<endl;
    }
    return 0;
}
