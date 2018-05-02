#include<bits/stdc++.h>
using namespace std;

int fun(initializer_list<int> v)
{
	int ans = 0;
	for(auto it:v)
		ans += it;
	return ans;
}

int main(void)
{
	cout << fun({1, 2, 3, 4}) << endl;
	return 0; 
}
