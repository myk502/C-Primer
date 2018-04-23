#include<string>
#include<iostream>
#include<cstdio>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main(void)
{
	string input1, input2;
	cin >> input1 >> input2;
	if(input1.size() == input2.size())
		printf("String1 and String2 has the same length.\n");
	else
	{
		printf("The string with longer length is:\n");
		cout << ((input1.size() > input2.size()) ? input1 : input2);
		cout << endl;
	}

	return 0;
}
