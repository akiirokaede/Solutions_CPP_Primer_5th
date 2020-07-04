#ifndef PERSON_HH
#define PERSON_HH
#include <string>
#include <iostream>
class Person
{
private:
    std::string name;
    std::string address;
public:
    Person()=default;
    Person(const std::string& s1):name(s1){}
    Person(const std::string& s1, const std::string& s2):name(s1),address(s2){}
    std::string getName() const {return name;}
    std::string getAddress() const {return address;}
};
std::ostream& print(std::ostream& os, Person& p){
    os<<p.getName()<<" "<<p.getAddress();
    return os;
}
#endif