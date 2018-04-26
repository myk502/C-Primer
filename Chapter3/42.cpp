#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int a[100];
int main(void)
{
	for(int i = 0; i < 10; i++)
		v.push_back(i);
	int id = 0;
	for(auto it:v)
		a[id++] = it;
	for(int i = 0; i < id; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}
