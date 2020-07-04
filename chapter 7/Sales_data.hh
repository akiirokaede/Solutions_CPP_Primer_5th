#ifndef SALES_DATA_HH
#define SALES_DATA_HH
#include <iostream>
class Sales_data {
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend std::ostream &print(std::ostream&, const Sales_data&);
    friend std::istream &read(std::istream&, Sales_data&);
    public:
        Sales_data()=default;
        Sales_data(const std::string &s):bookNo(s){}
        Sales_data(const std::string &s, unsigned u, double d):bookNo(s),units_sold(u),revenue(u*d){}
        Sales_data(std::istream &is){read(is, *this);}
        std::string isbn() const {return bookNo;}
        Sales_data& combine(const Sales_data&);
    private:
        double avg_price() const
        {return units_sold?revenue/units_sold:0;}
        std::string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;
};
Sales_data& Sales_data::combine(const Sales_data& rsd)
{
    units_sold+=rsd.units_sold;
    revenue+=rsd.revenue;
    return *this;
}
// Sales_data::Sales_data(std::istream &ist)
// {
//     read(ist, *this);
// }
Sales_data add(const Sales_data& lsd, const Sales_data& rsd)
{
    Sales_data temp=lsd;
    temp.combine(rsd);
    return temp;
}
std::ostream &print(std::ostream& os, const Sales_data& sd)
{
    os<<sd.isbn()<<" "<<sd.units_sold<<" "<<sd.revenue<<" "<<sd.avg_price();
    return os;
}
std::istream &read(std::istream& is, Sales_data& sd)
{
    double price=0;
    is>>sd.bookNo>>sd.units_sold>>price;
    sd.revenue=sd.units_sold*price;
    return is;
}
#endif