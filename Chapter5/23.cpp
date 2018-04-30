#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int a, b;
	while(true)
	{
		try
		{
			cin >> a >> b;
			if(b == 0)
				throw runtime_error("Divided by zero");
			cout << a / b << endl;
		}
		catch(runtime_error e)
		{
			cout << e.what() << endl;
			cout << "Please enter y to continue, n to exit" << endl;
			string x;
			cin >> x;
			if(x == "y")
				continue;
			else
				break;
		}
		
	}
	return 0;
}
