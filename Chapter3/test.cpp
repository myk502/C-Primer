#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(void)
{
	auto beg = begin(a);
	auto last = end(a);
	for(int* it = beg; it != last; it++)
		*it = 0;
	return 0;
}
