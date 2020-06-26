#include <string>
using namespace std;
using as=string[10];
string arr[10];

as (&func(as &arr));
auto func(as &arr) -> as(&);
decltype(arr) (&func(as &arr));