#include<bits/stdc++.h>
using namespace std;
int a[100];
int main(void)
{
	int* beg = begin(a);
	int* last = end(a);
	for(int* it = beg; it != last; it++)
		(*it) = 0;
	return 0;
}
