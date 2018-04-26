#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main(void)
{
	int x;
	while(cin >> x)
		v.push_back(x);
	for(auto& it : v)
	{
		if(it % 2 == 1)
			it <<= 1;
	}
	for(const auto& it : v)
		cout << it << " ";
	cout << endl;
	return 0;
}
