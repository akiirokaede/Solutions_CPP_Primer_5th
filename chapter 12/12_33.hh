#include <sstream>
#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <map>
#include <set>

class QueryResult;

class TextQuery{
    public:
    using lineNo = std::vector<std::string>::size_type;
    TextQuery(std::ifstream &ifs);
    QueryResult query(const std::string &s) const;
    private:
    std::shared_ptr<std::vector<std::string>> content;
    std::map<std::string,std::shared_ptr<std::set<lineNo>>> wtol;
};

TextQuery::TextQuery(std::ifstream &ifs): content(new std::vector<std::string>){
    std::string text;
    while (std::getline(ifs, text))
    {
        content->push_back(text);
        int n = content->size()-1;
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
    QueryResult(std::string s, std::shared_ptr<std::set<lineNo>> l, std::shared_ptr<std::vector<std::string>> c): 
    word(s),lines(l),content(c){}
    std::set<lineNo>::iterator begin(){return lines->begin();}
    std::set<lineNo>::iterator end(){return lines->end();}
    std::shared_ptr<std::vector<std::string>> get_file(){return content;}
    private:
    std::string word;
    std::shared_ptr<std::set<lineNo>> lines;
    std::shared_ptr<std::vector<std::string>> content;
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
        os<<"\t（行 "<<num+1<<"）"<<*(q.content->begin()+num)<<std::endl;
    }
    return os;
}