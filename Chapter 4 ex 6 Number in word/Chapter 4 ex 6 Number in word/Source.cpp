#include "..\..\std_lib_facilities.h"
int input_recognition(string digit)
{
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
	vector<string> digit_digit = {
		"0",
		"1",
		"2",
		"3",
		"4",
		"5",
		"6",
		"7",
		"8",
		"9"
	};
	for (int i = 0; i < digit_word.size(); ++i) {
		if (digit == digit_word[i]) return i;
	}
	for (int i = 0; i < digit_digit.size(); ++i) {
		if (digit == digit_digit[i]) return i;
	}
}

int main()
{
	cout << "Enter a number from 0 to 9 as a word or digit.\n";
	string digit;
	cin >> digit;
	cout << "You entered the number " << input_recognition(digit) << ".\n";

}