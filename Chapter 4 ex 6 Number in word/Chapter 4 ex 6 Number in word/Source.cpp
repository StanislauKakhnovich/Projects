#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Enter a number from 0 to 9 as a word.\n";
	vector<string> digit_word = { 
		"zero",
		"one", 
		"two",
		"three",
		"four",
		"five",
		"six",
		"seven",
		"eigth",
		"nine"
	};
	//int digit = 0;
	//cin >> digit;
	//cout << "You entered the number " << digit_word[digit] << ".\n";
	string word = "?";
	cin >> word;
	for (int i = 0; i < digit_word.size(); ++i) {
		if (word == digit_word[i]) cout << "You entered the number " << i << ".\n";
	}

}