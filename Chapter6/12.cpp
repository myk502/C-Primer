#include<bits/stdc++.h>
using namespace std;

void swap(int& i, int& j)
{
	int temp = i;
	i = j;
	j = temp;
}

int main(void)
{
	int i, j;
	cout << "Please input two integers: " << endl;
	cin >> i >> j;
	swap(i, j);
	cout << "The swapeed two integers are : "<< i << "  " << j << endl;
	return 0;
}
