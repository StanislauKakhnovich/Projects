#include "..\..\std_lib_facilities.h"

string toLowerCase(string day) {
	char letter = ' ';
	string result = "";
	for (int i = 0; i < day.size(); ++i) {
		letter = day[i];
		int digit_char;
		digit_char = letter;
		if (digit_char >= 65 && digit_char <= 90) digit_char += 32;
		char let = digit_char;
		result += let;
	}
	return result;
}

int main()
{
	vector<int> Monday;
	vector<int> Tuesday;
	vector<int> Wednesday;
	vector<int> Thursday;
	vector<int> Friday;
	vector<int> Saturday;
	vector<int> Sunday;
	vector<int> values;
	int mistakes = 0;
	for (string day; cin >> day;) {
		day = toLowerCase(day);
		int value;
		cin >> value;
		if (day == "monday" || day == "mon") Monday.push_back(value);
		else if (day == "tuesday"|| day == "tue") Tuesday.push_back(value);
		else if (day == "wednesday" || day == "wed") Wednesday.push_back(value);
		else if (day == "thursday" || day == "thur") Thursday.push_back(value);
		else if (day == "friday" || day == "fri") Friday.push_back(value);
		else if (day == "saturday"|| day == "sat") Saturday.push_back(value);
		else if (day == "sunday" || day == "sun") Sunday.push_back(value);
		else ++mistakes;
	}

	if (Monday.size() > 0) {
		cout << "Monday:\n";
		int sum = 0;
		for (int x : Monday) {
			cout << x << '\n';
			sum += x;
		}
		cout << "The sum of the numbers on Monday is " << sum << '\n';
	}
	if (Tuesday.size() > 0) {
		cout << "Tuesday:\n";
		int sum = 0;
		for (int x : Tuesday) {
			cout << x << '\n';
			sum += x;
		}
		cout << "The sum of the numbers on Tuesday is " << sum << '\n';
	}
	if (Wednesday.size() > 0) {
		cout << "Wednesday:\n";
		int sum = 0;
		for (int x : Wednesday) {
			cout << x << '\n';
			sum += x;
		}
		cout << "The sum of the numbers on Wednesday is " << sum << '\n';
	}
	if (Thursday.size() > 0) {
		cout << "Thursday:\n";
		int sum = 0;
		for (int x : Thursday) {
			cout << x << '\n';
			sum += x;
		}
		cout << "The sum of the numbers on Thursday is " << sum << '\n';
	}
	if (Friday.size() > 0) {
		cout << "Friday:\n";
		int sum = 0;
		for (int x : Friday){
			cout << x << '\n';
			sum += x;
		}
		cout << "The sum of the numbers on Friday is " << sum << '\n';
	}
	if (Saturday.size() > 0) {
		cout << "Saturday:\n";
		int sum = 0;
		for (int x : Saturday) {
			cout << x << '\n';
			sum += x;
		}
		cout << "The sum of the numbers on Saturday is " << sum << '\n';
	}
	if (Sunday.size() > 0) {
		cout << "Sunday:\n";
		int sum = 0;
		for (int x : Sunday) {
			cout << x << '\n';
			sum += x;
		}
		cout << "The sum of the numbers on Sunday is " << sum << '\n';
	}
	cout << "Number of incorrectly entered days of the week: " << mistakes << '\n';

}