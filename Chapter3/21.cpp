#include<bits/stdc++.h>
using namespace std;
vector<string> text{"hello", "three", "", "ddd"};
int main(void)
{
	printf("The size of the vector is %lu\n", text.size());
	for(auto it = text.begin(); (it != text.end() && (!it -> empty())); it++)
	{
		for(auto &ch:(*it))
		{
			ch = toupper(ch);
		}
	}
	for(auto it:text)
		cout << it << endl;
	return 0;
}
