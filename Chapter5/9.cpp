#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int cnt = 0;
	string input;
	getline(cin, input);
	for(auto it : input)
	{
		auto val = toupper(it);
		if(val == 'A')
			cnt++;
		if(val == 'E')
			cnt++;
		if(val == 'I')
			cnt++;
		if(val == 'O')
			cnt++;
		if(val == 'U')
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
