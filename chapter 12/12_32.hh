#include <sstream>
#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <map>
#include <set>
#include "StrBlob.hh"
#include "ConstStrBlobPtr.hh"

class QueryResult;

class TextQuery{
    public:
    using lineNo = std::vector<std::string>::size_type;
    TextQuery(std::ifstream &ifs);
    QueryResult query(const std::string &s) const;
    private:
    StrBlob content;
    std::map<std::string,std::shared_ptr<std::set<lineNo>>> wtol;
};

TextQuery::TextQuery(std::ifstream &ifs){
    std::string text;
    while (std::getline(ifs, text))
    {
        content.push_back(text);
        int n = content.size()-1;
        std::istringstream line(text);
        std::string word;
        while (line>>word)
        {
            auto &flag=wtol[word];
            if(!flag){
                flag.reset(new std::set<lineNo>);
            }
            flag->insert(n);
        }
    }
}

class QueryResult{
    friend std::ostream &print(std::ostream &, const QueryResult&);
    public:
    using lineNo = std::vector<std::string>::size_type;
    QueryResult(std::string s, std::shared_ptr<std::set<lineNo>> l, StrBlob c): 
    word(s),lines(l){content=c;}
    private:
    std::string word;
    std::shared_ptr<std::set<lineNo>> lines;
    StrBlob content;
};


QueryResult TextQuery::query(const std::string &s) const{
    static std::shared_ptr<std::set<lineNo>> nodata(new std::set<lineNo>);
    auto loc = wtol.find(s);
    if(loc==wtol.end())return QueryResult(s,nodata,content);
    else return QueryResult(s,loc->second,content);
}

std::ostream &print(std::ostream &os, const QueryResult &q){
    os<<q.word<<" 出现了："<<q.lines->size()<<" 次"<<std::endl;
    for(auto num:*q.lines){
        ConstStrBlobPtr p(q.content, num);
        os<<"\t（行 "<<num+1<<"）"<<p.deref()<<std::endl;
    }
    return os;
}