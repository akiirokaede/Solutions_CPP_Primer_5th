#include <iostream>
#include <list>
#include <forward_list>
using std::forward_list;
using std::list;
using std::cout;

auto remove_evens_and_double_odds(list<int>& data)
{
    for(auto cur = data.begin(); cur != data.end();)
        if (*cur & 0x1){
            cur = data.insert(cur, *cur);
            cur++;
            cur++;
        }
        else
            cur = data.erase(cur);
}

auto remove_evens_and_double_odds(forward_list<int>& data)
{
    auto prev=data.before_begin();
    for(auto cur = data.begin(); cur != data.end();)
        if (*cur & 0x1){
            cur = data.insert_after(prev, *cur);
            cur++;
            cur++;
            prev++;
            prev++;
        }
        else
            cur = data.erase_after(prev);
}

int main()
{
    list<int> data { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    forward_list<int> data2 { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    remove_evens_and_double_odds(data);
    remove_evens_and_double_odds(data2);
    for (auto i : data) cout << i << " ";
    cout<<std::endl;
    for (auto i : data2) cout << i << " ";
    return 0;
}