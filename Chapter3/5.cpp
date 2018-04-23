#include<bits/stdc++.h>
using namespace std;

int main()
{
	string ans, input;
	bool flag = true;
	while(cin >> input)
	{
		if(flag)
		{
			flag = false;
			ans = input;
		}
		else
			ans = ans + ' ' + input;
	}
	cout << ans << endl;
	return 0;
}
