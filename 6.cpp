#include<bits/stdc++.h>
using namespace std;

void fun(int x)
{
	static int val = 0;
	cout << "x = " << x << endl;
	cout << "val = " << ++val << endl;
}

int main(void)
{
	for(int i = 0; i < 10; i++)
		fun(i);
	return 0;
}
