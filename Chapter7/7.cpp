#include"Sales_data.h"
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int price;
	Sales_data total;
	if(read(cin, total))
	{
		//First calculate the revenue
		//define the trans object
		Sales_data trans;
		while(read(cin, trans))
		{
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
