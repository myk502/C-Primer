#include"Sales_data.h"
#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	int price;
	Sales_data total(cin);
	if(cin)
	{
		//First calculate the revenue
		//define the trans object
		while(cin)
		{
			Sales_data trans(cin);
			if(!cin)
				break;
			if(total.isbn() == trans.isbn())//combine the two sales records
			{
				total.combine(trans);
			}
			else//print the answer
			{
				print(cout, total);
				cout << endl;
				total = trans;//deal with next book

			}
		}
		print(cout, total);
		cout << endl;
	}
	else
		cerr << "No data?!" << endl;
	return 0;
}
