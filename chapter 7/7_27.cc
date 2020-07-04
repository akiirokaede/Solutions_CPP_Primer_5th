#include "Screen.hh"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main(void)
{
    Screen myScreen(5,5,'X');
    myScreen.move(4,0).set('#').display(cout);
    cout<<endl;
    myScreen.display(cout);
    cout<<endl;
}