#include<bits/stdc++.h>
using namespace std;
int ia[3][4];
void init(void)
{
	int cnt = 0;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 4; j++)
			ia[i][j] = cnt++;
}
void ver1(void)
{
	for(const int (&row)[4] : ia)
	{
		for(const int &val : row)
			cout << val << " ";
		cout << endl;
	}

}

void ver2(void)
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
			cout << ia[i][j] << " ";
		cout << endl;
	}

}

void ver3(void)
{
	for(int (*row)[4] = ia; row != end(ia); row++)
	{
		for(int* ptr = (*row); ptr != end(*row); ptr++)
			cout << (*ptr) << " ";
		cout << endl;
	
	}

}

int main(void)
{
	init();
	ver1();
	return 0;
}
