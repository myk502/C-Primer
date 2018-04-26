#include<bits/stdc++.h>
using namespace std;
int a[5] = {0, 1, 2, 3, 4};
void show2(auto& ptr)
{
	cout << sizeof(ptr) << endl;
}
int main(void)
{
	show2(a);
	return 0;
}
