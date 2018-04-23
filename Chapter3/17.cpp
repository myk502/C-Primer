#include<bits/stdc++.h>
using namespace std;
vector<string> v;
int main(void)
{
	string input;
	while(cin >> input)
		v.push_back(input);
	int cnt = 0;
	for(auto &it:v)
	{
		for(auto &ch:it)
			ch = toupper(ch);
		cout << it << " ";
		cnt++;
		if(cnt % 8 == 0)
			cout << endl;
	}
	return 0;
}
