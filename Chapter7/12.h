#ifndef SALES_DATA
#define SALES_DATA
#include<string>
struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	//Operations done on Sale_data objects
	std::string isbn()const{ return bookNo; }//defination
	Sales_data& combine(const Sales_data&);//declaration
	double avg_price()const;
	//different constructors
	Sales_data() = default;
	Sales_data(const std::string& s):bookNo(s){}
	Sales_data(const std::string& s, unsigned n, double p):bookNo(s), units_sold(n), revenue(p * n){}
	Sales_data(std::istream& is)
	{
		read(is, *this);
	}
};
//nonmember Sales_data interface functions
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);
#endif
