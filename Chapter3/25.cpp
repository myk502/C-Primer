#include<bits/stdc++.h>
using namespace std;
vector<int> score(11);
int main(void)
{
	int val;
	while(cin >> val)
	{
		auto it = score.begin() + (val / 10);
		(*it)++;
	}
	for(int i = 0; i <= 10; i++)
		printf("Score[%d] = %d\n", i, score[i]);
	return 0;
}
