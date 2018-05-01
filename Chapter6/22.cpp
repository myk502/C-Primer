#include<bits/stdc++.h>
using namespace std;

void fun(int* (&a), int* (&b))
{
	int* temp = a;
	a = b;
	b = temp;
}

int main(void)
{
	int a = 3, b = 4;
	int* ptr_a = &a, *ptr_b = &b;
	fun(ptr_a, ptr_b);
	cout << *ptr_a << " " << *ptr_b << endl;
	return 0;
}
