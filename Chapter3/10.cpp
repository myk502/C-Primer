#include<bits/stdc++.h>
using namespace std;

int main()
{
	string input, output;
	cin >> input;
	for(auto it:input)
		if(!ispunct(it))
			output += it;
	cout << output << endl;
	return 0;
}
