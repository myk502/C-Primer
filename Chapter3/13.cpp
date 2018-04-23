#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{10};
	vector<int> v5{10, 42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};
	printf("The size is %lu\n", v7.size());
	for(auto it = v7.begin(); it != v7.end(); it++)
		cout << *it << endl;
	return 0;
}
