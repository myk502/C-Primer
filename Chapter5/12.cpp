#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int cnt = 0;
	string input;
	getline(cin, input);
	int len = input.length();
	for(int i = 1; i < len; i++)
	{
		if(input[i - 1] != 'f')
			continue;
		if(input[i] == 'f' || input[i] == 'l' || input[i] == 'i')
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
