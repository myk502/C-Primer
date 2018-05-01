#include<bits/stdc++.h>
using namespace std;

void fun(void)
{
	static int cnt = 0;
	cout << ++cnt << endl;
}


int main(void)
{
	for(int i = 0; i < 10; i++)
		fun();
	return 0;
}
