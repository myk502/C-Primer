#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main(void)
{
	for(int i = 0; i < 10; i++)
		v.push_back(i);
	for(auto it = v.begin(); it != v.end(); it++)
		(*it) <<= 1;
	for(auto it:v)
		cout << it << endl;
	return 0;
}
