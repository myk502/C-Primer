#include<bits/stdc++.h>
using namespace std;
class Test
{
public:
	~Test()
	{
		cout << "Destructed" << endl;
	}
};
int main(void)			
{
	int cnt = 0;
	begin:;
	Test temp;
	if(cnt < 10)
	{
		cnt++;
		goto begin;
	}
	return 0;
}
