#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	string input, ans, last;
	while(cin >> input)
	{
		if(last == "")
		{
			last = input;
			continue;
		}
		if(last == input)
		{
			if(!isupper(input[0]))
				continue;
			ans = input;
			break;
		}
		last = input;
	}
	if(ans != "")
		cout << "The duplicated word is: " << ans << endl;
	else
		cout << "There is no duplicated word" << endl;
	return 0;
}
