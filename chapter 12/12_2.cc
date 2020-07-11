#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include <stdexcept>
#include <initializer_list>

class StrBlob {

public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob():data(std::make_shared<std::vector<std::string>>()){}
    StrBlob(std::initializer_list<std::string> il):data(std::make_shared<std::vector<std::string>>(il)){}
    size_type size() const {return data->size();}
    bool empty() const {return data->empty();}
    void push_back(const std::string &t){data->push_back(t);}
    void pop_back();
    std::string &front();
    std::string &back();
    const std::string &front() const;
    const std::string &back() const;

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};
void StrBlob::check(size_type i, const std::string &msg) const {
    if(i>=data->size()) throw std::out_of_range(msg);
}
void StrBlob::pop_back(){
    check(0, "pop_back on empty strBlob");
    data->pop_back();
}
std::string& StrBlob::front(){
    check(0, "front on empty strBlob");
    return data->front();
}
std::string& StrBlob::back(){
    check(0, "back on empty strBlob");
    return data->back();
}
const std::string& StrBlob::front() const{
    check(0, "front on empty strBlob");
    return data->front();
}
const std::string& StrBlob::back() const{
    check(0, "back on empty strBlob");
    return data->back();
}

int main(){
    StrBlob b1;
    {
        StrBlob b2({"I", "love", "the"});
        b1=b2;
        b2.push_back("world");
    }
    std::cout<<b1.size();
}