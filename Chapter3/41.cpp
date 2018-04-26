#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(void)
{
	for(int i = 0; i < 10; i++)
		a[i] = i;
	vector<int> v(begin(a), end(a));
	for(auto it:v)
		cout << it << " ";
	cout << endl;
	return 0;
}
