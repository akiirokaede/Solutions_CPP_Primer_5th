#ifndef ACCOUNT_HH
#define ACCOUNT_HH
#include <string>
class Account{
    public:
    void calculate() {amount+=amount*interestRate;}
    static double rate() {return interestRate;}
    static void rate(double);
    private:
    std::string owner;
    double amount;
    static double interestRate;
    static double initRate();
};
void Account::rate(double newRate){
    interestRate=newRate;
}
double Account::initRate(){
    interestRate=0.15;
}
#endif