#include<string>
#include<iostream>
using std::cin;
using std::cout;
using std::string;
using std::endl;
int main()
{
	string input;
	while(getline(cin, input))
	{
		cout << input << endl;
	}
	return 0;
}
