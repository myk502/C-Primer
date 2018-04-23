#include<bits/stdc++.h>
using namespace std;

int main()
{
	string input;
	cin >> input;
	decltype(input.size()) id = 0;
	for(; id < input.size(); id++)
		input[id] = toupper(input[id]);
	cout << input << endl;
	return 0;
}
