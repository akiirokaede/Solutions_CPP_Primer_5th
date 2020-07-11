#ifndef STRBLOB_HH
#define STRBLOB_HH
#include <string>
#include <memory>
#include <vector>
#include <initializer_list>
#include <stdexcept>
class StrBlobPtr;
class ConstStrBlobPtr;
class StrBlob {
public:
    typedef std::vector<std::string>::size_type size_type;
    friend class StrBlobPtr;
    friend class ConstStrBlobPtr;
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
    // StrBlobPtr begin(){return StrBlobPtr(*this);}
    // StrBlobPtr end(){return StrBlobPtr(*this, data->size());}

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


class StrBlobPtr{
public:
    StrBlobPtr(StrBlob& a, std::size_t sz=0):wptr(a.data), curr(sz){}
    std::string& deref() const;
    StrBlobPtr& incr();
private:
    std::shared_ptr<std::vector<std::string>> check(std::size_t, const std::string &) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr=0;
};

std::shared_ptr<std::vector<std::string>> StrBlobPtr::check(std::size_t i, const std::string & msg) const{
    auto ret = wptr.lock();
    if(!ret)throw std::runtime_error("unbound StrBlobPtr");
    if(i>=ret->size())throw std::out_of_range(msg);
    return ret;
}

std::string& StrBlobPtr::deref() const{
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr(){
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}
#endif