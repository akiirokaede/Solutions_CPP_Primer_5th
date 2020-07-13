#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

class iDate{
    private:
    unsigned year;
    unsigned month;
    unsigned day;
    public:
    iDate(): year(1949), month(10), day(1){cout<<"站起来！"<<endl;}
    iDate(const string &s){
        string enMonth("JanFebMarAprMayJunJulAugSepOctNovDec");
        // 1/1/1990
        if(s.find_first_of("/")!=string::npos){
            month=stoi(s.substr(0, s.find_first_of("/")));
            day=stoi(s.substr(s.find_first_of("/")+1,s.find_last_of("/")-s.find_first_of("/")));
            year=stoi(s.substr(s.find_last_of("/")+1,4));
        }
        else if(enMonth.find(s.substr(0,3))!=string::npos){
            // January 1, 1900
            if(s.find_first_of(",")){
                month=static_cast<int>(enMonth.find(s.substr(0,3)))/3+1;
                day=stoi(s.substr(s.find_first_of(" ")+1,s.find_first_of(",")-s.find_first_of(" ")));
                // cout<<s.substr(s.find_first_of(" ")+1,s.find_first_of(",")-s.find_first_of(" "));
                year=stoi(s.substr(s.find_last_of(" ")+1,4));
            }
            else{
                month=enMonth.find(s.substr(0,3))/3+1;
                day=stoi(s.substr(s.find_first_of(" ")+1,s.find_last_of(" ")-s.find_first_of(" ")));
                year=stoi(s.substr(s.find_last_of(" ")+1,4));
            }
        }
        else{
            throw runtime_error("输入非法，初始化失败！");
        }
    }
    void print(){
        cout<<year<<"年"<<month<<"月"<<day<<"日";
    }
};

int main(){
    try
    {
        string s;
        getline(cin,s);
        iDate a(s);
        a.print();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return 1;
    }
    
    return 0;
}