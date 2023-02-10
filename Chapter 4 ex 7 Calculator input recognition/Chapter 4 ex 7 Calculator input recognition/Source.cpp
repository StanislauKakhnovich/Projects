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
	cout << "Enter the first number as a word or digit, then the operator (+, -, *, , / ), then the second number as a word or digit. The numbers must be from 0 to 9.\n";
	
	string num1 = "?";
	string operation = "?";
	string num2 = "?";
	cin >> num1 >> operation >> num2;
	if (operation == "+") cout << "Adding of " << num1 << " and " << num2 << " is " << input_recognition(num1) + input_recognition(num2);
	else if (operation == "-") cout << "Subtracting of " << num1 << " by " << num2 << " is " << input_recognition(num1) - input_recognition(num2);
	else if (operation == "*") cout << "Multiplying of " << num1 << " by " << num2 << " is " << input_recognition(num1) * input_recognition(num2);
	else if (operation == "/") cout << "Dividing of " << num1 << " by " << num2 << " is " << input_recognition(num1) / input_recognition(num2);
}