#include"Sales_data.h"
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int price;
	Sales_data total;
	if(cin >> total.bookNo >> total.units_sold >> price)
	{
		//First calculate the revenue
		total.revenue = total.units_sold * price;
		//define the trans object
		Sales_data trans;
		while(cin >> trans.bookNo >> trans.units_sold >> price)
		{
			trans.revenue = trans.units_sold * price;
			if(total.isbn() == trans.isbn())//combine the two sales records
			{
				total.combine(trans);
			}
			else//print the answer
			{
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " <<(static_cast<double>(total.revenue) / static_cast<double>(total.units_sold)) << endl; 
				total = trans;//deal with next book

			}
		}
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " <<(static_cast<double>(total.revenue) / static_cast<double>(total.units_sold)) << endl; 
	}
	else
		cerr << "No data?!" << endl;
	return 0;
}
