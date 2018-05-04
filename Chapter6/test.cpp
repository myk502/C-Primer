#define NDEBUG
#include<bits/stdc++.h>
using namespace std;
int fun(int x)
{
	cout << __func__<<endl;
}

int main(void)
{
	int x, y;
	cin >> x >> y;
	assert(cin);
	return 0;
}
