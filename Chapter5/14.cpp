#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	string input, last;
	int cnt = 0;
	int maxx = -1;
	string ans;
	while(cin >> input)
	{
		if(last == "")//The first word
		{
			last = input;
			cnt = 1;
			continue;
		}
		if(last == input)
			cnt++;
		else
		{
			if(cnt > maxx)
			{
				maxx = cnt;
				ans = last;
			}
			last = input;
			cnt = 1;
		}
	}
	if(cnt > maxx)
	{
		maxx = cnt;
		ans = last;
	}
	if(maxx == 1)
		cout << "No word exists twice consecutively" << endl;
	else
		cout << "The word " << ans << " appears " << maxx << " times " << endl;
	return 0;
}
