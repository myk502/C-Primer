#include<bits/stdc++.h>
using namespace std;
char a[100] = "Hello ";
char b[100] = "World!";
char c[100];
int main(void)
{
	strcpy(c, a);
	strcat(c, b);
	printf("%s\n", c);
	return 0;
}
