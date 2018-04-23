#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main(void)
{
	int val;
	while(cin >> val)
		v.push_back(val);
	//The first approach
	decltype(v.size()) first = 0, last = v.size() - 1;
	while(first <= last)
	{
		if(first == last)
			cout << v[first] << endl;
		else
			cout << v[first] << " " << v[last] << endl;
		first++;
		last--;
	}
	return 0;
}
