#include<bits/stdc++.h>
using namespace std;
int ia[3][4];
using int_array = int[4];
void init(void)
{
	int cnt = 0;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 4; j++)
			ia[i][j] = cnt++;
}
void ver1(void)
{
	for(const int_array &row : ia)
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
	for(int_array* row = ia; row != end(ia); row++)
	{
		for(int* ptr = (*row); ptr != end(*row); ptr++)
			cout << (*ptr) << " ";
		cout << endl;
	
	}

}

int main(void)
{
	init();
	ver3();
	return 0;
}
