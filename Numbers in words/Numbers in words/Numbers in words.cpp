#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Enter a number from 0 to 4 as a word.\n";
	string word = "????";
	cin >> word;
	int control = 0;
	if (word == "zero") { cout << 0; ++control; }
	if (word == "one") {cout << 1; ++control;}
	if (word == "two") { cout << 2; ++control; }
	if (word == "three") { cout << 3; ++control; }
	if (word == "four") { cout << 4; ++control; }
	if (control == 0) cout << "I don't know that number!\n";
	
}