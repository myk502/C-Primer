#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main(void)
{
	int val;
	while(cin >> val)
		v.push_back(val);
	if(v.empty())
		return 0;
	auto first = v.begin();
	auto last = v.end() - 1;
	while(first < last)
	{
		cout << *first << " " << *last << endl;
		first++;
		last--;
	}
	if(first == last)
		cout << *first << endl;
	return 0;
}
