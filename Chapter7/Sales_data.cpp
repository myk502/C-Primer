#include"Sales_data.h"
#include<bits/stdc++.h>
using namespace std;

double Sales_data::avg_price()const
{
	if(units_sold)
		return revenue / units_sold;
	else
		return 0;
}

int main(void)
{
	return 0;
}
