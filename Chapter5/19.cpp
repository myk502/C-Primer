#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	string a, b;
	cout << "Please input two strings:" << endl;
	cin >> a >> b;
	do
	{
		string ans = (a.length() < b.length()) ? a : b;
		cout << ans << endl;
		cout << "Please input two strings:" << endl;

	}while(cin >> a >> b);
	return 0;
}
