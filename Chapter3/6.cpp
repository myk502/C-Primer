#include<string>
#include<iostream>
using std::cin;
using std::cout;
using std::string;
using std::endl;
int main()
{
	string input;
	cin >> input;
	for(char& it : input)
		it = 'X';
	cout << input << endl;
	return 0;
}
