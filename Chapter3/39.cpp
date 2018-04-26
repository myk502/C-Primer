#include<bits/stdc++.h>
using namespace std;
string str1, str2;
char a[100], b[100];
int main(void)
{
	cin >> str1 >> str2;
	cout << (str1 == str2) << endl;
	scanf("%s%s", a, b);
	cout << strcmp(a, b) << endl;
	return 0;
}
