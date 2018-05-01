#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

int main(void)
{
	int a, b;
	cout << "Please input The two integers:" << endl;
	cin >> a >> b;
	swap(&a, &b);
	cout << "The swapped two integers are:" << a << "  " << b << endl;
	return 0;
}
