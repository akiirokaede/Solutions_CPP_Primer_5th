#include <vector>
using namespace std;
int func(int a, int b);

using t1 = decltype(func) *;
using t2 = decltype(func);
using t3 = int (*)(int a, int b);
using t4= int(int a, int b);

vector<t1> v1;
vector<t2> v2;
vector<t3> v3;
vector<t4*> v4;