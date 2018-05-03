#define NDEBUG
#include<bits/stdc++.h>
using namespace std;
int fun(int x)
{
	cout << __func__<<endl;
}

int main(void)
{
	fun(3);
	return 0;
}
