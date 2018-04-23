#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	/*
	int a[10];
	for(int i = 0; i < 10; i++)
		a[i] = i;
	int b[10];
	for(int i = 0; i < 10; i++)
		b[i] = a[i];
	for(auto it:b)
		cout << it << endl;
	*/
	vector<int> v;
	for(int i = 0; i < 10; i++)
		v.push_back(i);
	vector<int> u(v);
	for(auto it:u)
		cout << it << endl;
	return 0;
}
