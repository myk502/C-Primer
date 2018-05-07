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
};
//nonmember Sales_data interface functions
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);
#endif
