#include<bits/stdc++.h>
using namespace std;

int addd(int x, int y)
{
	return x + y;
}

int subb(int x, int y)
{
	return x - y;
}


int mull(int x, int y)
{

	return x * y;
}

int divv(int x, int y)
{
	return x / y;
}

using Fun = decltype(addd);
vector<Fun*> v;
int main(void)
{
	v.push_back(addd);
	v.push_back(subb);
	v.push_back(mull);
	v.push_back(divv);
	cout << v[0](1, 2) << endl;
	return 0;
}
