#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &vi){
    if(vi.size()==0)return;
    #ifndef NDEBUG
        cout<<"剩余向量长度："<<vi.size()<<endl;
    #endif
    auto temp=vi.back();
    vi.pop_back();
    print(vi);
    cout<<temp<<" ";
}

int main(){
    vector<int> vi{1,2,3,4,5,6};
    print(vi);
    return 0;
}