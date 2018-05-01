#include<bits/stdc++.h>
using namespace std;

void print(int x)
{
	cout << x << endl;
}

void print(int (&ptr)[2])
{
	cout << ptr[0] << " " << ptr[1] << endl;
}

int main(void)
{
	int i = 0, j[2] = {0, 1};
	print(i);
	print(j);
	return 0;
}
