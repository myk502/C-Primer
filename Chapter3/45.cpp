#include<bits/stdc++.h>
using namespace std;
int ia[3][4];
int main(void)
{
	int cnt = 0;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 4; j++)
			ia[i][j] = cnt++;
	for(const auto &row:ia)
	{
		for(const auto &col:row)
			cout << col << " ";
		cout << endl;
	}
	return 0;
}
