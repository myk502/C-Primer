#include<bits/stdc++.h>
using namespace std;

vector<int> v{1, 2, 3, 4, 5};

void print(const vector<int>& v, vector<int>::iterator it)
{
	if(it == v.end())
		return;
	cout << *it << " ";
	print(v, it + 1);
}

int main(void)
{
	print(v, v.begin());
	cout << endl;
	return 0;
}
