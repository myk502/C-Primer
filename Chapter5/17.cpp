#include<bits/stdc++.h>
using namespace std;
vector<int> a, b;
int main(void)
{
	cout << "Enter the elements of vector a, end with -1" << endl;
	int val;
	while(cin >> val)
	{
		if(val == -1)
			break;
		a.push_back(val);
	}
	cout << "Enter the elements of vector b, end with -1" << endl;
	while(cin >> val)
	{
		if(val == -1)
			break;
		b.push_back(val);
	}
	int len1 = a.size(), len2 = b.size();
	bool flag = true;
	for(int i = 0; i < min(len1, len2); i++)
		if(a[i] != b[i])
			flag = false;
	cout << flag << endl;
	return 0;

}
