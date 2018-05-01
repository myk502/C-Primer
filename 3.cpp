#include<bits/stdc++.h>
using namespace std;

long fact(int x)
{
	long ans = 1;
	for(int i = 1; i <= x; i++)
		ans *= i;
	return ans;
}

int main(void)
{
	int n;
	while(cin >> n)
	{
		cout << fact(n) << endl;
	}
	return 0;
}
