#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
	string ans;
	for(int i = 1; i < argc; i++)
		ans += argv[i];
	cout << ans << endl;
	return 0;
}
